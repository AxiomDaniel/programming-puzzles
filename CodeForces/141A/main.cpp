#include <bits/stdc++.h>

using namespace std;

int main() {
  string guest, host, pile;
  int alphabets[26] = {0};

  cin >> guest >> host >> pile;

  for (char c : guest + host) {
    int char_int = c - 65;
    alphabets[char_int]++;
  }

  for (char c : pile) {
    int char_int = c - 65;
    alphabets[char_int]--;
  }

  for (int i : alphabets) {
    if (i != 0) {
      cout << "NO\n";
      exit(0);
    }
  }
  cout << "YES\n";
}