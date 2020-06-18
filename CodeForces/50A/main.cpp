#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n, horizontals, verticals{0};
  cin >> m >> n;

  horizontals = (m / 2)  * n;

  if (m % 2 != 0) {
    verticals = n / 2;
  }

  cout << horizontals + verticals;
  
}