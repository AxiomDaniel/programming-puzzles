#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  // Iterative
  int kthSmallest(TreeNode *root, int k) {
    stack<TreeNode *> s;
    vector<int> arr;

    TreeNode *curr = root;
    while (curr != NULL || !s.empty() || arr.size() < k - 1) {
      // Traverse leftward all the way, appending nodes into stack.
      while (curr != NULL) {
        s.push(curr);
        curr = curr->left;
      }

      curr = s.top();
      s.pop();

      arr.push_back(curr->val);
      curr = curr->right;
    }

    return arr[k - 1];
  }

  // Recursive
  int kthSmallest(TreeNode *root, int k) {
    vector<int> arr;

    inorderTraversalAux(root, &arr, k);
    return arr[k - 1];
  }

  void inorderTraversalAux(TreeNode *node, vector<int> *arr, int k) {
    // Base case
    if (node == NULL || arr->size() >= k) {
      return;
    }

    inorderTraversalAux(node->left, arr, k);
    arr->push_back(node->val);
    inorderTraversalAux(node->right, arr, k);
  }
};