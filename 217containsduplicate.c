#include <stdio.h>
#include <stdbool.h>
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
   qsort(nums, numsSize, sizeof(int), compare);
   for (size_t i = 0; i < numsSize-1; i++){
        if (nums[i]==nums[i+1])
        {
            return 1;
        }

   }
   return 0;
}