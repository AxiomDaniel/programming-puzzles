#include <bits/stdc++.h>

using namespace std;

int main() {
  int N_LIMIT = 100001;
  int n, tmp;
  long long cnt[N_LIMIT] = {0};
  long long memo[N_LIMIT] = {0};
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    cnt[tmp]++;
  }

  // f(0) = 0, f(1) = 1*cnt[1]
  memo[1] = cnt[1];

  for (int i = 2; i < N_LIMIT; i++) {
    memo[i] = max(
      memo[i-1],
      memo[i-2] + i * cnt[i]
    );
  }

  cout << memo[N_LIMIT-1] << "\n";
}