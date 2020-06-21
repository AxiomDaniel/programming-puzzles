#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp;
  vector<int> cols;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    cols.push_back(tmp);
  }

  sort(cols.begin(), cols.end());

  for (size_t i = 0; i < cols.size(); i++) {
    cout << cols[i] << ((i == cols.size() - 1) ? "\n": " ");
  }
}