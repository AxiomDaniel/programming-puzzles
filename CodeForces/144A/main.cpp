#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp, swaps{0}, tallest{INT_MIN}, shortest{INT_MAX}, index_tallest{-1}, index_shortest{-1};

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp <= shortest) {
      shortest = tmp;
      index_shortest = i;
    }
    if (tmp > tallest) {
      tallest = tmp;
      index_tallest = i;
    }
  }

  swaps += index_tallest;
  swaps += n - 1 - index_shortest;
  if (index_shortest < index_tallest) {
    swaps--;
  }

  cout << swaps << "\n";
}