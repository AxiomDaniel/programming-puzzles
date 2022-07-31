#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    queue<pair<int, int>> q;
    int maxArea = 0;

    for (int row = 0; row < grid.size(); row++) {
      for (int col = 0; col < grid[row].size(); col++) {
        if (grid[row][col] == 0) {
          continue;
        }

        // Commence BFS
        q.push({row, col});
        int area = 0;

        while (!q.empty()) {
          pair<int, int> pos = q.front();
          q.pop();

          if (grid[pos.first][pos.second] == 0) {
            continue;
          }

          // Mark as visited
          grid[pos.first][pos.second] = 0;
          area++;

          vector<pair<int, int>> neighbouringLands = findNeighbouringLand(grid, pos);
          for (pair<int, int> l : neighbouringLands) {
            q.push(l);
          }
        }

        maxArea = max(maxArea, area);
      }
    }

    return maxArea;
  }

  vector<pair<int, int>> findNeighbouringLand(vector<vector<int>>& grid, pair<int, int> currPos) {
    vector<pair<int, int>> lands;
    int x = currPos.first;
    int y = currPos.second;

    // North
    if (x - 1 >= 0) {
      lands.push_back({x - 1, y});
    }

    // South
    if (x + 1 < grid.size()) {
      lands.push_back({x + 1, y});
    }
    // East
    if (y - 1 >= 0) {
      lands.push_back({x, y - 1});
    }

    // West
    if (y + 1 < grid[x].size()) {
      lands.push_back({x, y + 1});
    }

    return lands;
  }
};

int main() {
  Solution mySolution = Solution();

  vector<vector<int>> input;
  // input.push_back(vector<char>{'1', '1', '1', '1', '0'});
  // input.push_back(vector<char>{'1', '1', '0', '1', '0'});
  // input.push_back(vector<char>{'1', '1', '0', '0', '0'});
  // input.push_back(vector<char>{'0', '0', '0', '0', '0'});

  input.push_back(vector<int>{1, 1, 0, 0, 0});
  input.push_back(vector<int>{1, 1, 0, 0, 0});
  input.push_back(vector<int>{0, 0, 1, 0, 0});
  input.push_back(vector<int>{0, 0, 0, 1, 1});

  cout << mySolution.maxAreaOfIsland(input) << "\n";
}