#include <bits/stdc++.h>

using namespace std;

bool is_distinct(int y) {
  string year = to_string(y);
  int bucket[10] = {0};

  for (char c : year) {
    int char_int = c - '0';
    if (bucket[char_int] == 1) {
      return false;
    }
    else {
      bucket[char_int] = 1;
    }
  }
  return true;
}

int main() {
  int y;

  cin >> y;
  y++;

  while (y <= 9012) {
    if (is_distinct(y)) {
      cout << y << "\n";
      break;
    }
    y++;
  }
}