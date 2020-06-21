#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, tmp, width{0};

  cin >> n >> h;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp > h) {
      width += 2;
    }
    else {
      width++;
    }
  }

  cout << width << "\n";
}