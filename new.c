//98)WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p[2];
    int *q[3];
    for(int i = 0 ; i<2 ; i++){
        p[i] = (int *)calloc(3,sizeof(int));
    }
    for(int i =0 ; i< 3 ; i++){
        q[i] = (int *)calloc(2,sizeof(int));
    }
    for(int i = 0 ; i<2 ;i++)
    {
        for(int j =0 ; j<3 ;j++){
            
        }
    }
    
}

