#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, tmp, delta, least{INT_MAX};
  vector<int> puzzles;
  
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> tmp;
    puzzles.push_back(tmp);
  }

  sort(puzzles.begin(), puzzles.end());

  for (int i = 0; i < m-n+1; i++) {
    delta = puzzles[i+n-1] - puzzles[i];
    if (delta < least) {
      least = delta;
    }
  }

  cout << least << "\n";
}
