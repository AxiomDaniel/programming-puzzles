#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int countComponents(int n, vector<vector<int>> &edges) {
    vector<bool> visited(n, false);
    vector<vector<int>> adjList(n, vector<int>(n, 0));
    stack<int> s;
    int count = 0;

    edgeListToAdjList(edges, &adjList);

    for (int node = 0; node < n; node++) {
      if (visited[node]) {
        continue;
      }

      count++;
      s.push(node);
      // Commence DFS
      while (!s.empty()) {
        int curr = s.top();
        s.pop();

        for (int i = 0; i < n; i++) {
          if (adjList[curr][i] == 1 && !visited[i]) {
            s.push(i);
          }
        }
        visited[curr] = true;
      }
    }

    return count;
  }

  void edgeListToAdjList(vector<vector<int>> edgeList, vector<vector<int>> *adjList) {
    for (vector<int> edge : edgeList) {
      int from = edge[0];
      int to = edge[1];
      (*adjList)[from][to] = 1;
      (*adjList)[to][from] = 1;
    }
  }
};

int main() {
  vector<vector<int>> edgeList = {{0, 1}, {1, 2}, {3, 4}};
  Solution mySolution = Solution();
  cout << mySolution.countComponents(5, edgeList);
}