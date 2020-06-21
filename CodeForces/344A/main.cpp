#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, groups{0};
  string tmp, curr;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp != curr) {
      groups++;
      curr = tmp;
    }
  }

  cout << groups << "\n";
}