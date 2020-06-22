#include <bits/stdc++.h>

using namespace std;

int main() {
  long long tmp, a, b, c, abc, ab, ac, bc;
  vector<long long> board;

  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    board.push_back(tmp);
  }

  // To make it faster, don't sort, just find max. But n is just 4, so I don't think it makes a huge difference.
  sort(board.begin(), board.end());

  abc = board.back();
  board.pop_back();

  for (int i = 0; i < 3; i++) {
    // Permutate
    ab = board[(3+i) % 3];
    ac = board[(2+i) % 3];
    bc = board[(1+i) % 3];

    c = abc - ab;
    a = ac - c;
    b = bc - c;

    if (ab == a + b && ac == a + c && bc == b + c && abc == a + b + c) {
      cout << a << " " << b << " " << c << "\n";
      exit(0);
    }
  }
}