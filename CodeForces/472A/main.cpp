#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;

  cin >> n;
  
  if (n % 2 == 0) {
    cout << n - 8 << " " << 8 << "\n";
  }
  else {
    cout << n - 9 << " " << 9 << "\n";
  }
}

// A composite number is a positive integer that can be formed by multiplying two smaller positive integers.
// Base case: 12 can be expressed by 4 8, both of which are composite numbers (2x2=4, 2x4=8)
// 13 can be expressed by 4 9, both are also composites (2x2=4, 3x3=9)
// 14 can be expressed by 6 8 (2x3=6, 2x4=8)
// 15 can be expressed by 6 9.
// 16 can be expressed by 8 8.
// 17 can be expressed by 8 9.
// Pattern: Odd numbers minus 9 to get other number. Even number minus 8 to get other number.
// Odd number - 9, the difference will definitely be even, which is composite.
// Even number - 8, the difference will be even, which will be composite.