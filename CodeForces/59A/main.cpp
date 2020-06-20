#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int upp{0}, lwr{0};

  cin >> s;

  for (char c : s) {
    if (isupper(c)) {
      upp++;
    }
    else {
      lwr++;
    }
  }
  
  if (upp > lwr) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  } 
  else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << "\n";
}