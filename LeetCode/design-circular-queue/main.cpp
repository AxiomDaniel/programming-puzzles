#include <bits/stdc++.h>

using namespace std;

class MyCircularQueue {
public:
  int front, rear, curr_size, max_size;
  vector<int> q;
  /** Initialize your data structure here. Set the size of the queue to be k. */
  MyCircularQueue(int k) {
    q = vector<int>(k);
    max_size = k;
    curr_size = 0;
    front = 0;
    rear = 0;
  }

  /** Insert an element into the circular queue. Return true if the operation is successful. */
  bool enQueue(int value) {
    if (this->isFull()) {
      return false;
    }
    q[rear] = value;
    rear = (rear + 1) % max_size;
    curr_size++;
    return true;
  }

  /** Delete an element from the circular queue. Return true if the operation is successful. */
  bool deQueue() {
    if (this->isEmpty()) {
      return false;
    }
    front = (front + 1) % max_size;
    curr_size--;
    return true;
  }

  /** Get the front item from the queue. */
  int Front() {
    if (this->isEmpty()) {
      return -1;
    }
    return q[front];
  }

  /** Get the last item from the queue. */
  int Rear() {
    if (this->isEmpty()) {
      return -1;
    }
    if (rear == 0) {
      return q[max_size - 1];
    }
    else {
      return q[rear-1];
    }
  }

  /** Checks whether the circular queue is empty or not. */
  bool isEmpty() {
    return curr_size == 0;
  }

  /** Checks whether the circular queue is full or not. */
  bool isFull() {
    return curr_size == max_size;
  }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

int main() {
  MyCircularQueue circularQueue = MyCircularQueue(81);
  cout << circularQueue.enQueue(69) << endl;  // true [69]
  cout << circularQueue.deQueue() << endl;    // true []
  cout << circularQueue.enQueue(92) << endl;  // true [92]
  cout << circularQueue.enQueue(12) << endl;  // true [92,12]
  cout << circularQueue.deQueue() << endl;    // true [12]
  cout << circularQueue.isFull() << endl;     // false
  cout << circularQueue.isFull() << endl;     // false
  cout << circularQueue.Front() << endl;      // 12
  cout << circularQueue.deQueue() << endl;    // true []
  cout << circularQueue.enQueue(28) << endl;  // true [28]
  cout << circularQueue.Front() << endl;      // 28
}