
def quickselect(arr, lo, hi, target):
    if lo >= hi:    # There's less than two elements to compare
        return

    mid = lomuto_partition(arr, lo, hi)

    if target == mid:  # Quickselect done
        return
    elif target < mid:
        quickselect(arr, lo, mid-1, target)
    else:
        quickselect(arr, mid+1, hi, target)


def lomuto_partition(arr, lo, hi):
    pivot = arr[hi]

    swapr = lo
    for i in range(lo, hi):
        if arr[i] <= pivot:
            arr[i], arr[swapr] = arr[swapr], arr[i]
            swapr += 1

    # Put the pivot to its rightful position
    arr[swapr], arr[hi] = arr[hi], arr[swapr]

    return swapr


if __name__ == "__main__":
    a = [1, 7, 3, 45, 3, 8]
    n = len(a) - 1
    target = 4
    # print(a)

    quickselect(a, 0, n, target)
    print(a)
