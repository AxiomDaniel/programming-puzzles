#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int,int>> matrices = {{2, 3}, {3, 6}, {6, 4}, {4, 5}};
  int size = (int) matrices.size();

  vector<vector<int>> memo(size, vector<int>(size, 0));

  int delta = 1;
  while (delta < size) {
    int row = 0;
    while (row < size - 1 && (row + delta) < size) {
      int col = row + delta;      

      // Enter the colosseum
      memo[row][col] = min(
        memo[row][col-1] + (matrices[row].first * matrices[col].first * matrices[col].second),
        memo[row+1][col] + (matrices[row].first * matrices[row].second * matrices[col].second)
      );
      
      row++;
    }
    delta++;
  }

  cout << memo[0][size-1];
}