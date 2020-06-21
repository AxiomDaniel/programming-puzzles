#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp, total{0};

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    total += tmp;
  }

  cout << (float)total / (float)n << "\n";
}