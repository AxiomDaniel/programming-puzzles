#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> memo_val;
    int integerBreak(int n) {
      memo_val = vector<int>(n+1);

      // set f(1) and f(2) to 1
      memo_val[1] = memo_val[2] = 1;

      // Iterate till n to get solution. For each iteration calculate for that number i's optimal cut and value
      for (int i = 3; i < n+1; i++) {
        int optimal_val = INT_MIN;
        vector<int> values;
        // Iterate through all possible pairs for i
        for (int k = 1; k <= i/2; k++) {
          values.push_back(k * (i-k));
          values.push_back(k * memo_val[i-k]);
          values.push_back(memo_val[k] * (i-k));
          values.push_back(memo_val[k] * memo_val[i-k]);

          int max_val = *max_element(values.begin(), values.end());
          if (max_val > optimal_val) {
            optimal_val = max_val;
          }
        }

        // All possible pairs iterated, optimal found. Add optimal value to memoization table
        memo_val[i] = optimal_val;
      }

      return memo_val[n];
    }
};

int main() {
  int n;
  cin >> n;
  Solution mySolution = Solution();
  cout << mySolution.integerBreak(n) << "\n";
}