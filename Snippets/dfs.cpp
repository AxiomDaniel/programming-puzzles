// WARNING: THIS IS NOT VERIFIED CODE. PLEASE CHECK THAT IT WORKS FIRST.

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

// Root, Left, Right
vector<int> preorderTraversalIterative(TreeNode *root) {
  stack<TreeNode *> s;
  vector<int> result;

  s.push(root);

  while (!s.empty()) {
    TreeNode *curr = s.top();
    s.pop();

    if (curr != NULL) {
      result.push_back(curr->val);

      s.push(root->right);
      s.push(root->left);
    }
  }

  return result;
}

vector<int> preorderTraversalRecursive(TreeNode *root) {
  vector<int> result;

  preorderTraversalRecursiveAux(root, &result);

  return result;
}

void preorderTraversalRecursiveAux(TreeNode *curr, vector<int> *arr) {
  // Base Case
  if (curr == NULL) {
    return;
  }

  arr->push_back(curr->val);

  preorderTraversalRecursiveAux(curr->left, arr);
  preorderTraversalRecursiveAux(curr->right, arr);
}

int main() {
}