#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, a, count{0};
  vector<pair<int,int>> teams;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> h >> a;
    teams.push_back({h, a});
  }

  for (int i = 0; i < n; i++) {
    for (int k = i+1; k < n; k++) {
      if (teams[i].first == teams[k].second) {
        count++;
      }
      if (teams[k].first == teams[i].second) {
        count++;
      }
    }
  }

  cout << count << "\n";
}