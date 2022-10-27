// LeetCode 75 Day 1

int pivotIndex(int* nums, int numsSize){

    for (int i = 1; i < numsSize; i++)
        nums[i] += nums[i - 1];
    
    for (int i = 0; i < numsSize; i++)
        if (nums[i - 1 * !!i] * !!i == nums[numsSize - 1] - nums[i])
    return (i);
    return (-1);
    
}
