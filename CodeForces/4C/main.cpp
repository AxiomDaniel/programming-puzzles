#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string name;
  unordered_map<string, int> db;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> name;
    if (db.count(name) == 0) {
      db[name] = 0;
      cout << "OK\n";
    }
    else {
      db[name]++;
      cout << name << db[name] << "\n";
    }
  }
}