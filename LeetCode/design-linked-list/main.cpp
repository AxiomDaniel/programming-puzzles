#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    int val;
    Node *next;
};

class MyLinkedList {
  public:
    Node* head;
    int size;
    /** Initialize your data structure here. */
    MyLinkedList() {
      head = NULL;
      size = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
      if (index >= size) {
        return -1;
      }
      Node* curr_ptr = head;
      for (int i = 0; i < index; i++) {
        curr_ptr = curr_ptr->next;
      }
      return curr_ptr->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
      Node* new_node = new Node();
      new_node->val = val;
      new_node->next = NULL;

      if (head != NULL) {
        new_node->next = head;
      }
      head = new_node;
      size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
      Node* new_node = new Node();
      new_node->val = val;
      new_node->next = NULL;
      
      Node* curr_ptr = head;
      while (true) {
        if (curr_ptr->next == NULL) {
          curr_ptr->next = new_node;
          size++;
          break;
        }
        curr_ptr = curr_ptr->next;
      }
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
      if (index > size) {
        return;
      }
      if (index == 0) {
        this->addAtHead(val);
      }

      Node* new_node = new Node();
      new_node->val = val;

      Node* curr_node = head;
      for(int i = 0; i < index-1; i++) {
        curr_node = curr_node->next;
      }

      if (size == 0) {
        curr_node = new_node;
      }
      else {
        new_node->next = curr_node->next;
        curr_node->next = new_node;
      }
      size++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
      if (index >= size) {
        return;
      }
      if (index == 0) {
        head = head->next;
        size--;
        return;
      }
      
      Node* curr_node = head;
      for(int i = 0; i < index-1; i++) {
        curr_node = curr_node->next;
      }

      curr_node->next = curr_node->next->next;
      size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main() {
  MyLinkedList *obj = new MyLinkedList();
  // obj->addAtHead(5);  // [5]
  // obj->addAtHead(4);  // [4,5]
  // cout << obj->get(1) << "\n";
  // cout << obj->get(2) << "\n";
  // obj->addAtTail(6);  // [4,5,6]
  // cout << obj->get(2) << "\n";
  // obj->addAtIndex(1, 3); // [4,3,5,6]
  // cout << obj->get(1) << "\n";
  // cout << obj->get(0) << "\n";
  // obj->deleteAtIndex(0);  // [3,5,6]
  // cout << obj->get(0) << "\n";
  // obj->deleteAtIndex(0);  // [5,6]
  // obj->deleteAtIndex(0);  // [6]
  // cout << obj->get(0) << "\n";
  // obj->deleteAtIndex(0);  // []
  // cout << obj->get(0) << "\n";
}