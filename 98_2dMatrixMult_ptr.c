//98)WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION.
#include <stdio.h>
#include <stdlib.h>
void printArray(int **pptr,int nrow , int ncol){
    for(int i = 0 ;i<nrow ; i++)
    {
        for(int j = 0 ;j <ncol ; j++)
        {
            printf("%d\t",pptr[i][j]);
        }
        printf("\n");
    }
}

void createArray(int**pptr, int r , int c){
    for(int i = 0 ; i<r ; i++)
    {
        pptr[i] = (int *)calloc(c,sizeof(int));
    }
}

void fillArray(int **pptr , int nrow , int ncol)
{
    for(int i = 0 ; i< nrow ; i++)
    {
        for(int j = 0 ; j< ncol ; j++)
        {
            printf("Enter(%d,%d)th element: ",i,j);
            scanf("%d",pptr[i]+ j);
        }
    }
}

int main()
{
    int *p[2]; //p is an array of two pointers
    int *q[3];//q is an array of 3 pointers
    int *r[2];//resulting array should be of order 2* something..
    
    //allocating memory to pointer in the arrays.
    createArray(p,2,3);
    createArray(q,3,2);

    printf("Enter values for the first matrix:\n");
    fillArray(p,2,3);

    //similarly, doing for q;
    fillArray(q,3,2);

    //printing the user entered arrays:
    printf("A matrix:\n");
    printArray(p,2,3);
    printf("\nB martrix:\n");
    printArray(q,3,2);

    //now allocating memory to the resulting array:
    createArray(r,2,3);
    

    //performing the multiplication:
    for(int i = 0 ; i< 2 ; i++)
    {
        for(int j = 0 ; j<2 ; j++){
            r[i][j] = 0;
            for(int k = 0 ; k<3 ; k++)
            {
                r[i][j] += p[i][k] * q[k][j];
            }
        }
    }

    //printing the final result:
    printf("the result matrix R = A X B :\n");
    printArray(r,2,2);

}

//thankyou!!