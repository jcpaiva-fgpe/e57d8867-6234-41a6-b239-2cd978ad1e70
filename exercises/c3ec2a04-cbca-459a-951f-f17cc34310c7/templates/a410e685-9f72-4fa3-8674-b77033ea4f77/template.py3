def heapify(nums, heap_size, root_index):
    {{code}}
    {{code}}
    {{code}}
    {{code}}

def heap_sort(nums):
    n = len(nums)
    for i in range(n, -1, -1):
        heapify(nums, n, i)
    
    for i in range(n - 1, 0, -1):
        nums[i], nums[0] = nums[0], nums[i]
    heapify(nums, i, 0)
