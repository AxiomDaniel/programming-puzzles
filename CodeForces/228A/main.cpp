#include <bits/stdc++.h>

using namespace std;

int main() {
  int tmp, buy{0};
  unordered_map<int, bool> colours;

  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    if (colours.count(tmp) == 0) {
      colours[tmp] = true;
    }
    else {
      buy++;
    }
  }

  cout << buy << "\n";
}