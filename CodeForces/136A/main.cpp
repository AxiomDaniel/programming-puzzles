#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, tmp;
  string final{""};
  cin >> n;
  
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    arr[tmp-1] = i + 1;
  }

  // Python .join
  for (size_t i = 0; i < arr.size(); i++) {
    cout << arr[i] << (i != arr.size() - 1 ? " " : "");
  }
  cout << "\n";
}
