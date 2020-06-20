#include <bits/stdc++.h>

using namespace std;

string check_words(string s, string t) {
  int size = s.size();
  for (int i = 0; i < size; i++) {
    if (s[i] != t[size-i-1]) {
      return "NO";
    }
  }
  return "YES";
}

int main() {
  string s, t;

  cin >> s >> t;

  if (s.size() != t.size()) {
    cout << "NO\n";
    exit(0);
  }

  cout << check_words(s,t) << "\n";
}
