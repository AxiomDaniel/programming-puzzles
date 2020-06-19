#include <bits/stdc++.h>

using namespace std;

int main() {
  int bucket[26] = {0}, distinct;
  string name;

  cin >> name;

  for (char& c : name) {
    bucket[int(c) - 97] = 1;
  }

  distinct = accumulate(bucket, bucket + 26, 0);

  if (distinct % 2 == 0) {
    cout << "CHAT WITH HER!\n";
  }
  else {
    cout << "IGNORE HIM!";
  }
}