#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, tmp, prev_earnings{0}, streak{0}, peak{0};
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp >= prev_earnings) {
      streak ++;
      
      if (streak > peak) {
        peak = streak;
      }
    }
    else {
      streak = 1;
    }
    prev_earnings = tmp;
  }
  
  cout << peak << "\n";
}