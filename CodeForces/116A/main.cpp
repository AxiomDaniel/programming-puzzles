#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, peak{0}, curr{0};

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    curr -= a;
    curr += b;
    
    if (curr > peak) {
      peak = curr;
    }
  }

  cout << peak << "\n";
}