struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> result;

    bfs(root, 0, &result);
    return result;
  }

  void bfs(TreeNode *node, int current_level, vector<vector<int>> *result) {
    // Base case;
    if (!node) {
      return;
    }

    // If new level does not exist, create one first.
    if (current_level >= result->size()) {
      vector<int> newVector;
      result->push_back(newVector);
    }

    // Add value to new level
    result->at(current_level).push_back(node->val);

    // Traverse Left then Right.
    bfs(node->left, current_level + 1, result);
    bfs(node->right, current_level + 1, result);
  }
};