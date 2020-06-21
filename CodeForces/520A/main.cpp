#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string word;
  set<char> alphabets;

  cin >> n;
  if (n < 26) {
    cout << "NO\n";
    exit(0);
  }

  cin >> word;
  for (char c : word) {
    alphabets.insert(tolower(c));
  }
  
  cout << (alphabets.size() == 26 ? "YES" : "NO")  << "\n";
}