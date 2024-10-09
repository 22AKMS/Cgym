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

int main(){

   int nums[]={1,2,3,1};
   int sizeofarray=sizeof(nums)/sizeof(int);
   sorter(nums,sizeofarray);
   int i = 0;
   if (nums[i]==nums[i+1]){
        return 0;

    }


}