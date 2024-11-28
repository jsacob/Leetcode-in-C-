#include <stdio.h>

int searchPosition(int *nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}

int main(void)
{
    int target = 4;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 13};
    int length = sizeof(array) / sizeof(array[0]);

    int position = searchPosition(array, length, target);
    printf("Position of %d: %d\n", target, position);

   return 0;
}