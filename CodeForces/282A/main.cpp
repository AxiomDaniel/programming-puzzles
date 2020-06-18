#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, result{0};
  string input;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> input;
    if (find(begin(input), end(input), '+') != end(input)) {
      result++;
    }
    else {
      result--;
    }
  }
  cout << result;
}