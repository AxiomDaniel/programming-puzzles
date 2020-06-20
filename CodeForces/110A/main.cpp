#include <bits/stdc++.h>

using namespace std;

string check_lucky(int number) {
  string num = to_string(number);

  for (char c : num) {
    if (int(c) != 52 && int(c) != 55) {
      return "NO\n";
    }
  }
  return "YES\n";
}

int main() {
  string n;
  long long ctr{0};

  cin >> n;

  for (char c : n) {
    if (int(c) == 52 || int(c) == 55) {
      ctr++;
    }
  }

  cout << check_lucky(ctr) << "\n";
}