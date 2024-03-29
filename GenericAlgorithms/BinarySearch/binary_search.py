#!/usr/bin/env python3


def binary_search(nums: list[int], target: int) -> int:
    lo = 0
    hi = len(nums) - 1

    while lo <= hi:
        mid = (lo + hi) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            lo = mid + 1
        else:
            hi = mid - 1

    return -1   # return -1 if not found
