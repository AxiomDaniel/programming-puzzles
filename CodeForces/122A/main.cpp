#include <bits/stdc++.h>

using namespace std;

bool divisible(int n, vector<int> luckies) {
  for (int lucky : luckies) {
    if (n % lucky == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  vector<int> luckies = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int n;

  cin >> n;
  
  if (binary_search(luckies.begin(), luckies.end(), n) || divisible(n, luckies)) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  
}