#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k, no_of_odd;

  cin >> n >> k;

  no_of_odd = n/2;
  if (n % 2 != 0) {
    no_of_odd++;
  }

  if (k <= no_of_odd) {
    cout << (k - 1)*2 + 1 << "\n";
  }
  else {
    cout << (k - no_of_odd) * 2 << "\n";
  }  
}