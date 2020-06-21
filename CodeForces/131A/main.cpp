#include <bits/stdc++.h>

using namespace std;

bool detect_all_caps(string word) {
  for (char c : word) {
    if (!isupper(c)) {
      return false;
    }
  }
  return true;
}

bool detect_reverse_capitalize(string word) {
  if (isupper(word[0])) {
    return false;
  }

  for (size_t i = 1; i < word.size(); i++) {
    if (islower(word[i])) {
      return false;
    }
  }
  return true;
}

int main() {
  string word;
  cin >> word;

  if (detect_all_caps(word)) {
    for (size_t i = 0; i < word.size(); i++) {
      word[i] = tolower(word[i]);
    }
    cout << word << "\n";
  }
  else if (detect_reverse_capitalize(word)) {
    word[0] = toupper(word[0]);
    
    for (size_t i = 1; i < word.size(); i++) {
      word[i] = tolower(word[i]);
    }

    cout << word << "\n";
  }
  else {
    cout << word << "\n";
  }
}