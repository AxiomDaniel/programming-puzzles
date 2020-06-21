#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, turns;

  cin >> n >> m;
  turns = min(n,m);

  if (turns % 2 == 0) {
    cout << "Malvika\n";
  }
  else {
    cout << "Akshat\n";
  }
}