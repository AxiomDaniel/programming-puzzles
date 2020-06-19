#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, years{0};

  cin >> a >> b;

  while (true) {
    a *= 3;
    b *= 2;
    years++;

    if (a > b) {
      cout << years << "\n";
      break;
    }
  }
}