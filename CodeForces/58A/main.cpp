#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, hello={"hello"};
  int ptr{0};

  cin >> s;
  
  for (char c : s) {
    if (c == hello[ptr]) {
      ptr++;
    }
  }

  if (ptr >= 5) {
    cout << "YES\n";
  } 
  else {
    cout << "NO\n";
  }
}