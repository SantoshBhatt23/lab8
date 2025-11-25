//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <stdio.h>
void pSqCube(int * num){
    printf("Square of entered number : %d\n",(*num)*(*num));
    printf("Cube of the entered number: %d\n",(*num)*(*num)*(*num));
    return;
}
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    pSqCube(&num);
    return 0;
}