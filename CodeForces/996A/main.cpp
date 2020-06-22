#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, bills{0};
  int denom[5] = {100, 20, 10, 5, 1};

  cin >> n;

  for (int i = 0; i < 5; i++) {
    bills += n / denom[i];
    n = n % denom[i];
  }

  cout << bills << "\n";
}
