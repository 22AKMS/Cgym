#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target,int* returnSize) {
    *returnSize = 2;
    int* solution = (int*)malloc(*returnSize * sizeof(int));
    for (size_t i = 0; i < numsSize; i++){
        for (size_t n = i+1; n < numsSize; n++){
            if (nums[i]+nums[n]==target)
            {
                solution[0]=n;
                solution[1]=i;
                return solution;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

//idk it works on leet code - my brain is fried