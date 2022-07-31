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

TreeNode *constructBinaryTree(vector<int> arr) {
  queue<TreeNode *> q;
  TreeNode *root = new TreeNode(arr[0]);

  int curr_index = 1;
  bool insert_left = true;
  TreeNode *curr = root;
  while (curr_index < (int)arr.size()) {
    TreeNode *new_node = new TreeNode(arr[curr_index]);

    q.push(new_node);

    if (insert_left) {
      curr->left = new_node;
    } else {
      curr->right = new_node;
    }
    insert_left = !insert_left;

    if (curr->left != nullptr && curr->right != nullptr) {
      curr = q.front();
      q.pop();
    }

    curr_index++;
  }

  return root;
}

class Solution {
 public:
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> arr;

    inorderTraversalAux(root, &arr);
    return arr;
  }

  void inorderTraversalAux(TreeNode *curr_node, vector<int> *arr) {
    if (curr_node == NULL) {
      return;
    }

    // Go Left
    inorderTraversalAux(curr_node->left, arr);

    arr->push_back(curr_node->val);

    // Go Right
    inorderTraversalAux(curr_node->right, arr);
  }

  vector<int> inorderTraversalIterative(TreeNode *root) {
    vector<int> arr;
    stack<TreeNode *> s;

    TreeNode *curr = root;
    while (curr != NULL || !s.empty()) {
      // Traverse leftward all the way, push nodes into stack.
      while (curr != NULL) {
        s.push(curr);
        curr = curr->left;
      }

      curr = s.top();
      s.pop();

      arr.push_back(curr->val);
      curr = curr->right;
    }

    return arr;
  }
};

int main() {
  // TreeNode *root = new TreeNode(1);
  // root->right = new TreeNode(2);
  // root->right->left = new TreeNode(3);

  // Solution mySolution = Solution();
  // vector<int> arr = mySolution.postorderTraversal(root);
  // for (int i : arr) {
  //   cout << i << ", ";
  // }

  vector<int> myBinaryTree{1, 3, 5, 7, 8, 9, 10, 13, 14, 15};
  TreeNode *root = constructBinaryTree(myBinaryTree);

  Solution mySolution = Solution();
  // vector<int> arr = mySolution.inorderTraversal(root);
  vector<int> arr = mySolution.inorderTraversalIterative(root);
  for (int i : arr) {
    cout << i << ", ";
  }
}
