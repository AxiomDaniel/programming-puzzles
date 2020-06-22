#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, candies, ways;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> candies;

    ways = (candies / 2) + (candies % 2) - 1;

    cout << ways << "\n";
  }
}
