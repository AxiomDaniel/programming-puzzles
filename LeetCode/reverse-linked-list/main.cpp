#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;

    while (head) {
      ListNode* newListNode = new ListNode(head->val);
      newListNode->next = prev;
      prev = newListNode;

      head = head->next;
    }
    return prev;
  }

  // ListNode* reverseList(ListNode* head) {
  //   return reverseListAux(head, NULL);  // The NULL represents the tail of the list
  // }

  // ListNode* reverseListAux(ListNode* node, ListNode* newHead) {
  //   // Base Case
  //   if (node == NULL) {
  //     return newHead;
  //   }

  //   ListNode* next = node->next;
  //   node->next = newHead;  // Link the tail with the second-last tail.
  //   return reverseListAux(next, node);
  // }
};

int main() {
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);

  Solution mySolution = Solution();
  ListNode* result = mySolution.reverseList(head);

  // ListNode* result = head;
  while (result) {
    cout << result->val << ",";
    result = result->next;
  }
}