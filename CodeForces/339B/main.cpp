#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, task_location, curr_pos{1}; 
  long long time{0};

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> task_location;

    if (task_location >= curr_pos) {
      time += task_location - curr_pos;
    }
    else {
      time += n -(curr_pos - task_location);
    }
    curr_pos = task_location;
  }

  cout << time << "\n";
}