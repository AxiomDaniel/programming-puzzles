#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

int main() {
  string line, final;
  int a{0}, b{0}, c{0};
  cin >> line;

  for (size_t i = 0; i < line.length(); i++) {
    if (line[i] == '1') {
      a++;
    } 
    else if (line[i] == '2') {
      b++;
    } else if (line[i] == '3') {
      c++;
    }
  }

  if (a) {
    a--;
    final = "1";
  } else if (b) {
    b--;
    final = "2";
  } else {
    c--;
    final = "3";
  }

  for (int i = 0; i < a; i++) {
    final += "+1";
  }
  for (int i = 0; i < b; i++) {
    final += "+2";
  }
  for (int i = 0; i < c; i++) {
    final += "+3";
  }

  cout << final << "\n";
}