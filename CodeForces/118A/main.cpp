#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  string final = "";
  char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

  cin >> input;
  for_each(input.begin(), input.end(), [](char & c){
    c = tolower(c);
  });

  for (char i : input) {
    if (find(begin(vowels), end(vowels), i) != end(vowels)) {
      continue;
    }
    else {
      final += ".";
      final += i;
    }
  }
  cout << final << "\n";
}