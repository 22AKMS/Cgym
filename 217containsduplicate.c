#include <stdio.h>
#include <stdbool.h>
void sorter(int arr[], int n){

    for (size_t i = 0; i < n-1; i++){

        int min_idx = i;
        for (size_t j = i+1; j < n; j++){
            if (arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i]=temp;
    }
}
bool containsDuplicate(int* nums, int numsSize) {
   sorter(nums,numsSize);
   for (size_t i = 0; i < numsSize-1; i++){
        if (nums[i]==nums[i+1])
        {
            return 1;
        }

   }
   return 0;
}
