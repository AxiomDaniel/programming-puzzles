#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, my_val{0}, his_val, no_of_coins{0};
  vector<int> coins;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> k;
    coins.push_back(k);
  }
  
  sort(coins.begin(), coins.end(), greater <>());


  for (size_t i = 0; i < coins.size(); i++) {
    my_val += coins[i];
    no_of_coins += 1;
    his_val = accumulate(next(coins.begin(), i+1), coins.end(), 0);

    if (my_val > his_val) {
      cout << no_of_coins << "\n";
      break;
    }
  }
}