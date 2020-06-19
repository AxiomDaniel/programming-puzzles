#include <bits/stdc++.h>

using namespace std;

int compare_strings(string first, string second) {
  for (long unsigned int i = 0; i < first.length(); i++) {
    if (int(first.at(i)) > int(second.at(i))) {
      return 1;
    }
    else if (int(first.at(i)) < int(second.at(i))) {
      return -1;
    }
  }
  return 0;
}

int main() {
  string first, second;

  cin >> first >> second;

  // TIP: Convert string to uppercase/lowercase
  transform(first.begin(), first.end(), first.begin(), ::toupper);
  transform(second.begin(), second.end(), second.begin(), ::toupper);


  cout << compare_strings(first,second)<< "\n";
}