#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, l, tmp, curr_gap, space{INT_MIN}, edge_d;
  double interlantern_d;

  cin >> n >> l;
  vector<int> lanterns {};

  for (int i = 0; i < n; i++){
    cin >> tmp;
    lanterns.push_back(tmp);
  }

  sort(lanterns.begin(), lanterns.end());

  for (size_t i = 1; i < lanterns.size(); i++) {
    curr_gap = lanterns[i] - lanterns[i-1];
    if (curr_gap > space) {
      space = curr_gap;
    }
  }
  interlantern_d = (double)space/2;  
  edge_d = max(lanterns[0], l - lanterns.back());

  if (edge_d > interlantern_d) {
    cout << edge_d << "\n";
  }
  else {
    cout << fixed << interlantern_d << "\n";
  }
}