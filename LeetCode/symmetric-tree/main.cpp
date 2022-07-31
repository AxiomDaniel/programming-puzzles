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
  bool isSymmetric(TreeNode *root) {
    vector<int> leftFirstDFSArr;
    vector<int> rightFirstDFSArr;

    leftFirstDFS(root, &leftFirstDFSArr);
    rightFirstDFS(root, &rightFirstDFSArr);

    for (int i : leftFirstDFSArr) {
      cout << i << ",";
    }
    cout << endl;
    for (int i : rightFirstDFSArr) {
      cout << i << ",";
    }
    cout << endl;

    for (int i = 0; i < leftFirstDFSArr.size(); i++) {
      if (leftFirstDFSArr[i] != rightFirstDFSArr[i]) {
        return false;
      }
    }
    return true;
  }

  void leftFirstDFS(TreeNode *node, vector<int> *arr) {
    if (!node) {
      arr->push_back(-1);
      return;
    }

    arr->push_back(node->val);

    leftFirstDFS(node->left, arr);
    leftFirstDFS(node->right, arr);
  }

  void rightFirstDFS(TreeNode *node, vector<int> *arr) {
    if (!node) {
      arr->push_back(-1);
      return;
    }

    arr->push_back(node->val);

    rightFirstDFS(node->right, arr);
    rightFirstDFS(node->left, arr);
  }
};

int main() {
  TreeNode *root = new TreeNode(1);
  root->right = new TreeNode(0);

  Solution mySolution = Solution();
  cout << mySolution.isSymmetric(root);
}