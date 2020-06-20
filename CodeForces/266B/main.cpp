#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t; 
  string q;
  char tmp;
  vector<int> swaps;

  cin >> n >> t;
  cin >> q;

  for (int k = 0; k < t; k++) {
    for (int i = 1; i < n; i++) {
      if (q[i-1] == 'B' && q[i] == 'G') {
        swaps.push_back(i);
      }
    }

    for (int swap: swaps) {
      tmp = q[swap];
      q[swap] = q[swap-1];
      q[swap-1] = tmp;
    }
    swaps.clear();
  }

  cout << q << "\n";
}