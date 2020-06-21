#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, sides{0};
  string tmp;
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;

    if (tmp == "Tetrahedron") {
      sides += 4;
    }
    else if (tmp == "Cube") {
      sides += 6;
    }
    else if (tmp == "Octahedron") {
      sides += 8;
    }
    else if (tmp == "Dodecahedron") {
      sides += 12;
    }
    else if (tmp == "Icosahedron") {
      sides += 20;
    }
    else {
      exit(1);
    }
  }

  cout << sides << "\n";
}