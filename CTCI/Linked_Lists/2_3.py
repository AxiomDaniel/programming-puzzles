#! /usr/bin/env python3

# This is not the same as thr question outlined in the book. Solutions here are meant to tackle this question:
# Given a singly-linked list of integers, delete the middle node and return the list. If the list is even-lengthed, delete the former node instead of the latter.

from ListNode import ListNode, print_linked_list, construct_linked_list


def delete_middle_node(root: ListNode) -> ListNode:
    if not root:
        return None

    prehead = ListNode()
    prehead.next = root
    prev = prehead
    curr = root
    runner = root.next

    while runner:
        try:
            runner = runner.next.next
            prev = curr
            curr = curr.next
        except:
            runner = runner.next

    prev.next = prev.next.next
    return prehead.next


if __name__ == "__main__":
    # []
    head_1 = construct_linked_list([])
    result_1 = delete_middle_node(head_1)
    print_linked_list(result_1)

    # [1]
    head_2 = construct_linked_list([1])
    result_2 = delete_middle_node(head_2)
    print_linked_list(result_2)

    # [1,2,3,4,5]
    head_3 = construct_linked_list([1, 2, 3, 4, 5])
    result_3 = delete_middle_node(head_3)
    print_linked_list(result_3)

    # [1,2,3,4]
    head_4 = construct_linked_list([1, 2, 3, 4])
    result_4 = delete_middle_node(head_4)
    print_linked_list(result_4)

    # [1,2]
    head_5 = construct_linked_list([1, 2])
    result_5 = delete_middle_node(head_5)
    print_linked_list(result_5)
