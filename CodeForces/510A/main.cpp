#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  string dots(m-1, '.');
  string hashes(m, '#');
  string rhs = dots + '#';
  string lhs = '#' + dots;  
  bool is_rhs{true};

  cout << hashes << "\n";
  for (int i = 0; i < n / 2; i++) {
    if (is_rhs) {
      cout << rhs << "\n";
      cout << hashes << "\n";
    }
    else {
      cout << lhs << "\n";
      cout << hashes << "\n";
    }
    is_rhs = !is_rhs;
  }
}