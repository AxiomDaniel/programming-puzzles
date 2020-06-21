#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp;
  vector<int> even;
  vector<int> odd;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp % 2 == 0) {
      even.push_back(i);
    }
    else {
      odd.push_back(i);
    }

    if (even.size() >= 2 && odd.size() == 1) {
      cout << odd.at(0) + 1 << "\n";
      break;
    }
    else if (odd.size() >= 2 && even.size() == 1) {
      cout << even.at(0) + 1 << "\n";
      break;
    }
    else {
      continue;
    }
  }
}