//to find the maximum number in a given list using pointers.
#include <stdio.h>
int main()
{
    //defining array and its size
    int nums[] = {898,448,454,344,777,888};
    int numsSize = sizeof(nums)/sizeof(nums[0]);

    //defining pointer and max variable.
    int * nptr;
    nptr = nums;
    int max = *nptr;

    //finding the greatest num in the array.
    for(int i =1 ; i<numsSize ; i++)
    {
        if(nptr[i] > max)
             max = nptr[i];
    }


    //printing array and the maximum element.
    printf("array:\n");
    for(int i = 0 ; i<numsSize; i++)
    {
        printf("%d\t",nums[i]);
    }

    printf("\n");

    printf("maximum element : %d\n",max);
    return 0;
}