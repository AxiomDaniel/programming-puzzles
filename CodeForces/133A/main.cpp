#include <bits/stdc++.h>

using namespace std;

string output(string p, vector<int> k) {
  for (char c : p) {
    if (binary_search(k.begin(), k.end(), int(c))) {
      return "YES";
    }
  }
  return "NO";
}

int main() {
  string p;
  vector<int> k {57, 72, 81};
  
  cin >> p;

  cout << output(p, k) << "\n";  
}