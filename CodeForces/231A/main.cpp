#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, n;
  int sure = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    if ((a + b + c) >= 2) {
      sure++;
    }
  }
  cout << sure;
}