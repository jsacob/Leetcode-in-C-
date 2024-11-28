#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while(left <= right)
    {
        int mid = left + (right - left) /2;

        if(nums[mid] == target){
            return mid;
        }else if (nums[mid] < target){
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
int array[] = {1, 2, 3, 4, 5, 6};
int length = sizeof(array) / sizeof(array[0]);
int target = 4;
int position = search(array, length, target);
printf("Position of %d: %d\n", target, position);
}