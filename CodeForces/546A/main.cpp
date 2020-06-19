#include <bits/stdc++.h>

using namespace std;

int main() {
  long long k, w, n, cost, borrow;

  cin >> k >> n >> w;
  cost = (w*(w+1)/2) * k;

  borrow = cost - n;

  if (borrow > 0) {
    cout << borrow << "\n";
  } else {
    cout << 0 << "\n";
  }
  
}