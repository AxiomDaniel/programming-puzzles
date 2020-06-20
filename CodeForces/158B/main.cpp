#include <bits/stdc++.h>

using namespace std;

int main() {
  int tmp, n, taxi{0}, group[4] = {0};

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    group[tmp-1]++;
  }

  // Pairings
  // 4
  taxi += group[3];

  // 3 1
  while (group[2] > 0 && group[0] > 0) {
    taxi++;
    group[2]--;
    group[0]--;
  }

  // 2 2
  while (group[1] >= 2) {
    taxi++;
    group[1] -= 2;
  }

  // 2 1 1
  while (group[1] > 0 && group[0] >= 2) {
    taxi++;
    group[1]--;
    group[0] -= 2;
  }

  // 2 1
  while (group[1] > 0 && group[0] > 0) {
    taxi++;
    group[1]--;
    group[0]--;
  }

  // 1 1 1 1
  taxi += group[0] / 4;
  if (group[0] % 4 != 0) {
    taxi++;
  }

  // Add residues
  taxi += group[2];
  taxi += group[1];

  cout << taxi << "\n";
}

// 4
// 3 1
// 2 2
// 2 1 1
// 2 1
// 1 1 1 1