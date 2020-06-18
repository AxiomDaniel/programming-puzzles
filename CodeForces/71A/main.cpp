#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string k, final;
  vector<string> words;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> k;
    if (k.length() > 10) {
      final = k.at(0) + to_string(k.length() - 2) + k.back();
    } else {
      final = k;
    }
    words.push_back(final);
  }

  for (string word: words) {
    cout << word << "\n";
  }
}