#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestCommonSubsequence(string text1, string text2) {

    vector<vector<int>> memo(text1.size()+1, vector<int>(text2.size()+1, 0));
    int text1_size = (int) text1.size();
    int text2_size = (int) text2.size();

    for (int i = 1; i < text1_size+1; i++) {
      for (int k = 1; k < text2_size+1; k++) {
        if (text1[i-1] == text2[k-1]) {
          memo[i][k] = 1 + memo[i-1][k-1];
        }
        else {
          memo[i][k] = max(memo[i-1][k], memo[i][k-1]);
        }
      }
    }

    // //Print matrix
    // for (vector<int> row : memo) {
    //   for (int i : row) {
    //     cout << i << ", ";
    //   }
    //   cout << "\n";
    // }
    // return 0;
    return memo[text1_size][text2_size];
  }
};

int main() {
  // string text1 = "abcde";
  // string text2 = "ace";
  // string text1 = "abc";
  // string text2 = "abc";
  string text1 = "abc";
  string text2 = "def";
  Solution mySolution = Solution();
  cout << mySolution.longestCommonSubsequence(text1, text2) << "\n";
}