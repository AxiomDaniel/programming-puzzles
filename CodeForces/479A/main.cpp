#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, peak{0}, arr[6];

  cin >> a >> b >> c;

  arr[0] = a+b+c;
  arr[1] = a+b*c;
  arr[2] = a*b+c;
  arr[3] = a*b*c;
  arr[4] = (a+b)*c;
  arr[5] = a*(b+c);

  for (int i : arr) {
    if (i > peak) {
      peak = i;
    }
  }

  cout << peak << "\n";
}