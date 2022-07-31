#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp;
  vector<int> results;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    results.push_back(tmp);
  }

  int least = results[0];
  int most = results[0];
  int amazing = 0;

  for (int i = 1; i < n; i++) {
    if (results[i] < least) {
      amazing++;
      least = results[i];
    }

    if (results[i] > most) {
      amazing++;
      most = results[i];
    }
  }

  cout << amazing;
}