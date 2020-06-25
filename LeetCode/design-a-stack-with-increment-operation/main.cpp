#include <bits/stdc++.h>

using namespace std;

class CustomStack {
public:
  vector<int> arr, inc;
  size_t max_size;
  CustomStack(int maxSize) {
    max_size = maxSize;
  }

  void push(int x) {
    if (arr.size() >= max_size) {
      return;
    }
    arr.push_back(x);
    inc.push_back(0);
  }

  int pop() {
    if (arr.empty()) {
      return -1;
    }
    int sum = arr.back() + inc.back();
    arr.pop_back();
    inc.pop_back();
    return sum;
  }

  void increment(int k, int val) {
    int j = min(k, (int) arr.size());
    for (int i = 0; i < j; i++) {
      inc[i] += val;
    }
  }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */

int main() {
  CustomStack customStack = CustomStack(3);
  customStack.push(1);
  customStack.push(2);
  cout << customStack.pop() << endl;
  customStack.push(2);
  customStack.push(3);
  customStack.push(4);
  customStack.increment(5, 100);
  customStack.increment(2, 100);
  cout << customStack.pop() << endl;
  cout << customStack.pop() << endl;
  cout << customStack.pop() << endl;
  cout << customStack.pop() << endl;
}