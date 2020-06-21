#include <bits/stdc++.h>

using namespace std;

// trim from end (in place)
static inline void rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {return !std::isspace(ch);}).base(), s.end());
}

int main() {
  string song, original{""};

  cin >> song;

  int i = 0;
  int size = song.size();
  while (i < size) {
    if (i+2 < size && song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B') {
      i += 3;
      if (original != "" && original.back() != ' ') {
        original += ' ';
      }
    }
    else {
      original += song[i];
      i++;
    }
  }

  rtrim(original);
  cout << original << "\n";
}