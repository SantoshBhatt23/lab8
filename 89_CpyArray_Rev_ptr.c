#include <stdio.h>
void cpyArrayRev(int *des,int *s,int aSize){
    for(int i = 0 ;i<aSize ; i++)
    {
        des[i] = s[aSize-1-i];
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
    int arr1[]= {14,28,12,24,10,20};
    int arr2[6];
    cpyArrayRev(arr2,arr1,6);
    printArray(arr2,6);
    return 0;
}