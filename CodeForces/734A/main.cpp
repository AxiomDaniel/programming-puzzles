#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, anton{0}, danik{0};
  string games;

  cin >> n >> games;

  for (char g : games) {
    if (g == 'A') {
      anton++;
    }
    else {
      danik++;
    }
  }

  if (anton == danik) {
    cout << "Friendship\n";
  }
  else if (anton > danik) {
    cout << "Anton\n";
  }
  else {
    cout << "Danik\n";
  }
}