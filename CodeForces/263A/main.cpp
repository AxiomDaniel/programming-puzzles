#include <bits/stdc++.h>

using namespace std;

tuple<int, int> find_position() {
  string line;
  int ptr, row_pos, col_pos;
  for (int row = 0; row < 5; row++) {
    getline(cin, line);
    istringstream iss(line);
    for (int col = 0; col < 5; col++) {
      iss >> ptr;
      if (ptr == 1) {
        row_pos = row;
        col_pos = col;
      }
    }
  }
  return {row_pos, col_pos};
}

int main() {
  tuple<int, int> position;
  int final;
  
  position = find_position();
  final = abs(get<0>(position) - 2) + abs(get<1>(position) - 2);

  cout << final << '\n';
}