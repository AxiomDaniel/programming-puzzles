#include <bits/stdc++.h>

using namespace std;

class MyStack {
public:
  /** Initialize your data structure here. */
  queue<int> q1, q2;
  int size;
  MyStack() {
    size = 0;
  }

  /** Push element x onto stack. */
  void push(int x) {
    q2.push(x);

    while (!q1.empty()) {
      q2.push(q1.front());
      q1.pop();
    }

    queue<int> tmp = q1;
    q1 = q2;
    q2 = tmp;

    size++;
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop() {
    if (size <= 0) {
      return -1;
    }

    int tmp = q1.front();
    q1.pop();
    size--;
    return tmp;
  }

  /** Get the top element. */
  int top() {
    if (size <= 0) {
      return -1;
    }

    return q1.front();
  }

  /** Returns whether the stack is empty. */
  bool empty() {
    if (size <= 0) {
      return true;
    }
    return false;
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
  MyStack *obj = new MyStack();
  obj->push(1);
  obj->push(2);
  cout << obj->top();
  cout << obj->pop();
  cout << obj->empty();
}