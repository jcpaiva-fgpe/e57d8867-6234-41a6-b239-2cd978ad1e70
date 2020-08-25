if largest != root_index:
    nums[root_index], nums[largest] = nums[largest], nums[root_index]
    heapify(nums, heap_size, largest)
