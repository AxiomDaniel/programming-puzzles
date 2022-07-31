#include <bits/stdc++.h>

using namespace std;

void swap(string *str, int a, int b) {
  char tmp = str->at(a);
  str->at(a) = str->at(b);
  str->at(b) = tmp;
}

void permute(string str, int left, int right, vector<string> *arr) {
  // Base Case
  if (left == right) {
    arr->push_back(str);
  }

  for (int i = left; i <= right; i++) {
    swap(&str, i, left);

    permute(str, left + 1, right, arr);

    swap(&str, i, left);
  }
}

int main() {
  string str = "ABCD";
  vector<string> permutations;

  permute(str, 0, str.size() - 1, &permutations);

  for (string s : permutations) {
    cout << s << "\n";
  }
  cout << permutations.size() << "\n";
}