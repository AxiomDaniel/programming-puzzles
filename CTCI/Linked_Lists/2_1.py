#! /usr/bin/env python3
from ListNode import ListNode, print_linked_list, construct_linked_list


def remove_duplicates(root: ListNode) -> ListNode:
    pre_head = ListNode()
    pre_head.next = root

    if not root:
        return root

    look_up = {}
    curr = pre_head
    while curr.next:
        if curr.next.val in look_up:
            curr.next = curr.next.next
        else:
            look_up[curr.next.val] = curr
            curr = curr.next
    return pre_head.next


if __name__ == "__main__":
    # [1,2,2,4]
    root = construct_linked_list([1, 2, 2, 2, 4])
    result = remove_duplicates(root)
    print_linked_list(result)

    # []
    root_1 = None
    result = remove_duplicates(root_1)
    print_linked_list(result)

    # [1,1,2,2,3,3,4]
    root_2 = construct_linked_list([1, 1, 2, 2, 3, 3, 4])
    result = remove_duplicates(root_2)
    print_linked_list(root_2)

    # [1]
    root_3 = construct_linked_list([1])
    result = remove_duplicates(root_3)
    print_linked_list(root_3)
