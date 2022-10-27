// LeetCode 75 Day 1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *num = (int*)malloc(sizeof(int) * numsSize);
    int sum = 0;
    *returnSize = numsSize;
    for(int i = 0; i < numsSize; i++) {
        num[i] = sum + nums[i];
        sum = num[i];
    }
    return num;
}
