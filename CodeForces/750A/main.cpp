#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, result;
  cin >> n >> k;

  int time = 240 - k;

  if (time >= 225) {
    result = 9;
  } else if (time >= 180) {
    result = 8;
  } else if (time >= 140) {
    result = 7;
  } else if (time >= 105) {
    result = 6;
  } else if (time >= 75) {
    result = 5;
  } else if (time >= 50) {
    result = 4;
  } else if (time >= 30) {
    result = 3;
  } else if (time >= 15) {
    result = 2;
  } else if (time >= 5) {
    result = 1;
  } else {
    result = 0;
  }

  result = result <= n ? result : n;
  cout << result;
}