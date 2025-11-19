//program to copy element of one array to another using pointers
#include <stdio.h>
void cpyArray(int *des,int*source,int aSize)
{
    for(int i = 0 ; i< aSize ; i++)
    {
        *des = *source;
        des++;
        source++;
    }
}
void printArray(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[] = {3,4,5,6,11,22};
    int arr2[6];
    cpyArray(arr2,arr1,6);
    printArray(arr2,6);
}