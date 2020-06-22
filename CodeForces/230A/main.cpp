#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, n, str, bonus;
  vector<pair<int, int>> dragons;

  cin >> s >> n;

  for (int i = 0; i < n; i++) {
    cin >> str >> bonus;
    dragons.push_back({str, bonus});
  }

  sort(dragons.begin(), dragons.end(), [](pair<int, int> i, pair<int, int> j) { return i.first < j.first; });

  for (pair<int, int> dragon : dragons) {
    if (s > dragon.first) {
      s += dragon.second;
    }
    else {
      cout << "NO\n";
      exit(0);
    }
  }
  cout << "YES\n";
}