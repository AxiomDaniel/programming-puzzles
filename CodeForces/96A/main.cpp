#include <bits/stdc++.h>

using namespace std;

string is_dangerous(string line) {
  int counter{1};
  char flag;
  flag = line[0];
  
  for (size_t i = 1; i < line.size(); i++) {
    if (line[i] == flag) {
      counter++;
    }
    else {
      counter = 1;
      flag = line[i];
    }

    if (counter >= 7) {
      return "YES";
    }
  }
  return "NO";
}

int main() {
  string line; 


  cin >> line;

  cout << is_dangerous(line) << "\n";  
}