#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int numIslands(vector<vector<char>>& grid) {
    int islands = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (grid[i][j] == '1') {
          dfsRemoveIslands(grid, {i, j});
          islands++;
        }
      }
    }
    return islands;
  }

  void dfsRemoveIslands(vector<vector<char>>& grid, pair<int, int> start_point) {
    stack<pair<int, int>> s;

    s.push(start_point);

    while (!s.empty()) {
      pair<int, int> currPoint = s.top();
      s.pop();

      int row = currPoint.first;
      int col = currPoint.second;

      if (row < 0 || row >= (int)grid.size() || col < 0 || col >= (int)grid[0].size() || grid[row][col] != '1') {
        continue;
      }

      // Append all four sides into stack. Note that there will be points that are out of bounds.
      s.push({row - 1, col});  // North
      s.push({row + 1, col});  // South
      s.push({row, col - 1});  // West
      s.push({row, col + 1});  // East

      grid[row][col] = '0';
    }
  }
};

int main() {
  Solution mySolution = Solution();

  vector<vector<char>> input;
  // input.push_back(vector<char>{'1', '1', '1', '1', '0'});
  // input.push_back(vector<char>{'1', '1', '0', '1', '0'});
  // input.push_back(vector<char>{'1', '1', '0', '0', '0'});
  // input.push_back(vector<char>{'0', '0', '0', '0', '0'});

  // input.push_back(vector<char>{'1', '1', '0', '0', '0'});
  // input.push_back(vector<char>{'1', '1', '0', '0', '0'});
  // input.push_back(vector<char>{'0', '0', '1', '0', '0'});
  // input.push_back(vector<char>{'0', '0', '0', '1', '1'});

  cout << mySolution.numIslands(input) << "\n";
}