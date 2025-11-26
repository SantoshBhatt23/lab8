#include <stdio.h>
int main()
{
    int row1[] = {1,2,3};
    int *ptr = &row1[0];
    int *qtr = ptr;
    printf("%d",*qtr);
}