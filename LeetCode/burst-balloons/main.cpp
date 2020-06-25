#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int maxCoins(vector<int> &nums) {
      if (nums.empty()) {
        return 0;
      }
      int size = nums.size();
      vector<vector<int>> memo(size, vector<int>(size,0));

      // Length represents the substring that we are currently find the optimal for.
      for (int length = 1; length <= size; length++) {
        // Left represents the left boundary/starting index of the substring we're finding the optimal for.
        for (int left = 0; left <= size-length; left++) {
          // The right boundary will be the ending boundary of the substring.
          int right = left + length - 1;
          // Enter the colosseum
          // i represents the element that we'll be testing as last balloon to pop.
          for (int i = left; i <= right; i++) {
            // Guard clauses for leftmost and rightmost balloon boundaries
            int leftmost_val = (left != 0) ? nums[left-1] : 1;
            int rightmost_val = (right != size-1) ? nums[right+1] : 1;

            // Guard clause for empty left and right substring values
            int left_substr_val = (i != left) ? memo[left][i-1] : 0;
            int right_substr_val = (i != right) ? memo[i+1][right] : 0;
            
            memo[left][right] = max(
              memo[left][right],
              (leftmost_val * nums[i] * rightmost_val) + left_substr_val + right_substr_val  // Calculate value using i as last baloon to burst. then add left optimal and right optimal
            );
          }
        }
      }

      // Print matrix
      // for (vector<int> i : memo) {
      //   for (int k : i) {
      //     cout << k << ", ";
      //   }
      //   cout << "\n";
      // }


      return memo[0][size-1];

    }
};

int main() {
  vector<int> balloons = {3, 1, 5, 8};
  Solution mySolution = Solution();
  cout << mySolution.maxCoins(balloons) << "\n";
}
