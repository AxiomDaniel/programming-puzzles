#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, value, polarity;

  cin >> n;

  if (n % 2 == 0) {
    polarity = 1;
  }
  else {
    n++;
    polarity = -1;
  }

  value = n/2;

  cout << polarity * value << "\n";
}