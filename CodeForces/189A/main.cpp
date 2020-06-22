#include <bits/stdc++.h>

using namespace std;

void top_down_ribbon_cutting_aux(int n, vector<int> *length_list, vector<int> *memo_pieces_list, vector<vector<int>> *memo_cut_list) {
  // Consult memoization table
  if ((*memo_pieces_list)[n - 1] != -1) {
    return;
  }

  // Not found, so find optimal solution
  int curr_pieces, max_pieces = INT_MIN;
  vector<int> best_cut, curr_cut;

  // Enter the colosseum 
  for (int length : *length_list) {
    int remaining_length = n - length;
    // Base case
    if (remaining_length == 0) {
      curr_cut = {length};
      curr_pieces = 1;
    }
    else if (remaining_length > 0) {
      top_down_ribbon_cutting_aux(remaining_length, length_list, memo_pieces_list, memo_cut_list);
      curr_cut = (*memo_cut_list)[remaining_length - 1];
      curr_cut.push_back(length);
      curr_pieces = (*memo_pieces_list)[remaining_length - 1] + 1;
    } else {
      continue;
    }

    if (curr_pieces > max_pieces) {
      max_pieces = curr_pieces;
      best_cut = curr_cut;
    }
  }

  // Winner found, so update into table
  (*memo_pieces_list)[n - 1] = max_pieces;
  (*memo_cut_list)[n - 1] = best_cut;
}


int top_down_ribbon_cutting(int n, vector<int> length_list) {
  vector<int> memo_pieces_list(n, -1);
  vector<vector<int>> memo_cut_list(n);

  top_down_ribbon_cutting_aux(n, &length_list, &memo_pieces_list, &memo_cut_list);

  return memo_pieces_list[n-1];
}



int main() {
  int n, tmp;
  vector<int> length_list;

  cin >> n;
  for (int i = 0; i < 3; i++) {
    cin >> tmp;
    length_list.push_back(tmp);
  }

  cout << top_down_ribbon_cutting(n, length_list) << "\n";
}

// Tag: DP