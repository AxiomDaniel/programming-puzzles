#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int findCircleNum(vector<vector<int>>& M) {
    vector<bool> friendsVisited(M.size(), false);
    int circles = 0;
    stack<int> s;

    for (int i = 0; i < friendsVisited.size(); i++) {
      if (!friendsVisited[i]) {
        circles++;
        // Current friend hasn't been visited yet, so traverse via DFS to see who's connected to this person.
        s.push(i);

        while (!s.empty()) {
          int curr = s.top();
          s.pop();

          friendsVisited[curr] = true;

          for (int k = 0; k < M[curr].size(); k++) {
            if (M[curr][k] == 1 && !friendsVisited[k]) {
              friendsVisited[k] = true;
              s.push(k);
            }
          }
        }
      }
    }
    return circles;
  }
};

int main() {
  continue;
}