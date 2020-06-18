#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, k_score, x;
  int passed = 0;
  vector<int> scores;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> x;
    scores.push_back(x);
  }

  k_score = scores.at(k - 1);

  for (int score : scores) {
    if (score > 0 && score >= k_score) {
      passed++;
    }
  }
  cout << passed;
}