#! /usr/bin/env python3

from ListNode import ListNode, construct_linked_list


def return_kth_elem(root: ListNode, k: int) -> ListNode:
    assert k > 0, "k needs to be greater than 0"

    curr = root
    runner = root

    for _ in range(k):
        if not runner:
            return None
        runner = runner.next

    while runner:
        runner = runner.next
        curr = curr.next

    return curr


if __name__ == "__main__":
    head = construct_linked_list([4, 5, 6, 7, 8, 9, 10])
    result = return_kth_elem(head, 1)
    print(result.val)

    result_1 = return_kth_elem(head, 3)
    print(result_1.val)
