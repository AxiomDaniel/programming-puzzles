
def quicksort(arr, lo, hi):
    # This ensures that there are at least two elements to be sorted. If there's only one element, it is already sorted.
    if lo < hi:
        # mid is the index which is at its sorted position, the left and right subarray needs to be sorted.
        mid = lomuto_partition(arr, lo, hi)

        quicksort(arr, lo, mid-1)
        quicksort(arr, mid+1, hi)


def hoare_quicksort(arr, lo, hi):
    if lo < hi:
        print(f"lo = {lo}, hi = {hi}")
        mid = hoare_partition(arr, lo, hi)
        print(mid)
        print(arr)

        hoare_quicksort(arr, lo, mid)
        hoare_quicksort(a, mid + 1, hi)


def lomuto_partition(arr, lo, hi):
    # Pick the last element as pivot as a matter of convenience
    pivot = arr[hi]

    swapr = lo
    for i in range(lo, hi):
        if arr[i] <= pivot:
            arr[i], arr[swapr] = arr[swapr], arr[i]
            swapr += 1

    # Swap the pivot to its sorted position
    arr[swapr], arr[hi] = arr[hi], arr[swapr]
    return swapr


def hoare_partition(arr, lo, hi):
    pivot = arr[lo]

    l = lo - 1
    r = hi + 1
    while True:

        # Traverse l rightward until you find an element greater than or equal to pivot
        l += 1
        while arr[l] < pivot:
            l += 1

        # Traverse r leftward until an element smaller than or equal to pivot is found
        r -= 1
        while arr[r] > pivot:
            r -= 1

        if l >= r:
            return r

        arr[l], arr[r] = arr[r], arr[l]

# NOTE: DO NOT USE THIS HOARE PARTITION FOR QUICKSELECT. THE MID POINT IT RETURNS IS NOT GUARANTEED CORRECT PARTITIONING.
# If you really want to use Hoare's partition, read this https://stackoverflow.com/questions/58331986/quickselect-with-hoare-partition-scheme
# For example, test [1,7,3,45,3,8]
# When sorting the partition lo = 3, hi = 5, it will return [1,3,3,8,7,45] with index 4 as partition
# This is clearly incorrect, as 7 is right of the partition.
# The sorting still works, it just doesnt work if you're using it for quickselect.

# NOTE: l = lo - 1, r = hi + 1 and then incrementing them later looks very very stupid.
# But it serves an important purpose whenever you encounter an array full of duplicates.
# It forces the l and r to move instead of infinitely looping, swapping with each other forever.
# If you don't believe, try running [1,1], you will notice that:
# pivot = 1
# lo will be 1 (index 0)
# hi will be 1 (index 1)
# swap lo and hi.
# Then now you're back at the same spot without change. If you had the "stupid" statements there, you would force the loop to terminate


if __name__ == "__main__":
    a = [1, 7, 3, 45, 3, 8]
    # print(a)

    # quicksort(a, 0, len(a)-1)
    # print(a)

    hoare_quicksort(a, 0, len(a)-1)
