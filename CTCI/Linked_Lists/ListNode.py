#! /usr/bin/env python3

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def print_linked_list(node: ListNode) -> None:
    while node:
        print(f"{node.val}->", end="")
        node = node.next
    print("")


def construct_linked_list(vals: list) -> ListNode:
    pre_head = ListNode()

    curr = pre_head
    for val in vals:
        tmpNode = ListNode(val)
        curr.next = tmpNode
        curr = curr.next

    return pre_head.next


if __name__ == "__main__":
    head = construct_linked_list([1, 2, 3, 4, 5])
    print_linked_list(head)
