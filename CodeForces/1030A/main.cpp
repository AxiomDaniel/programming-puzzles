#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp == 1) {
      cout << "HARD\n";
      exit(0);
    }
  }
  cout << "EASY\n";
}