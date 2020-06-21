#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  bool hate{true};

  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "I " << (hate ? "hate " : "love ") << (i != n-1 ? "that " : "it\n");
    hate = !hate;
  }
}