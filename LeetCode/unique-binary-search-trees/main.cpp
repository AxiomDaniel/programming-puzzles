#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numTrees(int n) {
    // G stores function G(n): the number of unique BSTs possible for a sequence of length n (i.e. n unique nodes).
    vector<int> G(n+1);

    // G(0) represents the number of BSTs when there are 0 nodes (i.e. empty tree). G(1) represents number of BST when there is 1 node (i.e. a tree of one node).
    G[0] = G[1] = 1;

    // x represents the length of the sequence that we are calculating for. The answer we are looking for is G(x).
    for (int x = 2; x < (int)G.size(); x++) {
      for (int y = 1; y <= x; y++) {
        // Here we have y, x. Which is basically variables i, n for use in f(i,n)
        // This formula is just f(i,n) but we're summing for all i where i = 1..n.
        G[x] += G[y-1] * G[x-y];
      }
    }
    return G[n];
  }
};

int main() {
  int n;
  cin >> n;
  Solution mySolution = Solution();
  cout << mySolution.numTrees(n) << "\n";
}

// G(n) represents the number of unique BSTs for a sequence of length n.
// F(i,n) represents the number of unique BSTs for a sequence of length n, WITH i as the root node.

// Naturally, G(n) will be the summation of F(i,n):
// G(n) = F(1,n) + F(2,n) + ... + F(n,n)
// That is, All of the unique BSTs when 1 is the root node + all of the unique BSTs when 2 is the root node .... all of the unique BSTs when n is the root node.

// How to find F(i, n)?
// Suppose we have F(3,7), 3 is the root node, and length is 7. So we can partition it into 2 sides.
// LHS of root node 3, we have elems 1,2
// RHS of root node, we have 4,5,6,7.

// Finding the unique BSTs possible with elems 1,2 will just be G(2), and for elems 4,5,6,7 will be G(4)
// Now, we have all possible BSTs for LHS and RHS. We need to cartesian product them to get the full set of permutations.
// So, F(3,7) = G(2) * G(4)
// Finally we arrive at the formula: 
// F(i,n) = G(i-1) * G(n-i)

// How does G(n) relate to F(i,n)? See above formula.
// G(2) = F(1,2) + F(2,2)
// G(2) = (G(0) * G(1)) + (G(1) * G(0))
// G(2) = 1 + 1 = 2

// G(3) = F(1,3) + F(2,3) + F(3,3)
// G(3) = (G(0) * G(2)) + (G(1) * G(1)) + (G(2) * G(0))
// G(3) = (1 * 2) + (1 * 1) + (2 * 1)
// G(3) = 2 + 1 + 2
// G(3) = 5
