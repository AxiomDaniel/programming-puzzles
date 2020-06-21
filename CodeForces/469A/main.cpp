#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, pq, tmp;
  
  cin >> n;
  vector<int> levels(n);

  for (int k = 0; k < 2; k++) {
    cin >> pq;
    for (int i = 0; i < pq; i++) {
      cin >> tmp;
      levels[tmp - 1] = 1;
    }
  }

  if (accumulate(levels.begin(), levels.end(), 1, ::logical_and<int>())) {
    cout << "I become the guy.\n";
  }
  else {
    cout << "Oh, my keyboard!\n";
  }
}
