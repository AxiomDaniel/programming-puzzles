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
  bool isValidBST(TreeNode *root) {
    vector<int> arr;

    inorderTraversalAux(root, &arr);

    for (int i = 1; i < arr.size(); i++) {
      if (arr[i - 1] >= arr[i]) {
        return false;
      }
    }
    return true;
  }

  void inorderTraversalAux(TreeNode *node, vector<int> *arr) {
    if (node == NULL) {
      return;
    }

    inorderTraversalAux(node->left, arr);

    arr->push_back(node->val);

    inorderTraversalAux(node->right, arr);
  }
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

int main() {
  vector<int> notBinarySearchTree{1, 3, 5, 7, 8, 9, 10, 13, 14, 15};
  TreeNode *notBSTRoot = constructBinaryTree(notBinarySearchTree);

  vector<int> binarySearchTree{10, 7, 14, 3, 9, 13, 15, 1, 5, 8};
  TreeNode *BSTRoot = constructBinaryTree(binarySearchTree);

  Solution mySolution = Solution();
  cout << mySolution.isValidBST(notBSTRoot) << endl;
  cout << mySolution.isValidBST(BSTRoot) << endl;
}

// For BST, inorder traversal must be in ascending order.