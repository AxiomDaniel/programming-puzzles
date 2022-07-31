#! /usr/bin/env python3

from collections import deque


class MinStack:
    def __init__(self):
        self.s = deque()
        self.min_s = deque()

    def push(self, value):
        self.s.append(value)
        if not self.min_s:
            self.min_s.append(value)
        elif value <= self.min_s[-1]:
            self.min_s.append(value)

    def pop(self):
        if not self.s:
            return -1
        else:
            val = self.s.pop()
            if val == self.min_s[-1]:
                self.min_s.pop()
            return val

    def min(self):
        if not self.s:
            return -1
        return self.min_s[-1]


if __name__ == "__main__":
    min_stack = MinStack()

    min_stack.push(5)
    print(min_stack.min())

    min_stack.push(2)
    print(min_stack.min())

    min_stack.push(1)
    print(min_stack.min())

    min_stack.push(3)
    print(min_stack.min())

    min_stack.pop()
    min_stack.pop()
    print(min_stack.min())
