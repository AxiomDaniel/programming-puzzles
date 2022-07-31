#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;

  int i = 1;
  while (i < 10) {
    int price = k * i;
    int lsd = price % 10;

    if (lsd == r || lsd == 0) {
      break;
    }
    i++;
  }
  cout << i;
}