#include <bits/stdc++.h>

using namespace std;

int main() {
  set<char> distincts;
  string letters;

  getline(cin, letters);

  for (char c : letters) {
    if (c == '{' || c == '}' || c == ' ' || c == ',') {
      continue;
    }
    distincts.insert(c);
  }

  cout << distincts.size() << "\n";
}