#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; 
  string tmp;
  vector<int> rounds;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> tmp;
    for (size_t k = 0; k < tmp.size(); k++) {
      if (tmp[k] != '0') {
        rounds.push_back((tmp[k] - '0') * pow(10, tmp.size()-k-1));
      }
    }

    cout << rounds.size() << "\n";
    for (size_t j = 0; j < rounds.size(); j++) {
      cout << rounds[j] << (j != rounds.size() - 1 ? " ": "\n");
    }

    rounds.clear();
  }
}