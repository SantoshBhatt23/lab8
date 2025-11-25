/*
WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
*/
#include <stdio.h>
#include <string.h>

typedef struct Employee{
    int empNum;
    char empName[100];
    int basic_pay;
} emp;
int main()
{
    emp employees[50];
    emp * ptr = employees;
    int n;
    printf("enter the no of entries(n) : ");
    scanf("%d",&n);
    for(int i = 0 ; i< n ; i++){
        printf("Entry Count: %d----------------------------------------------------------------------------------------------------------\n",i+1);
        printf("Enter Employee number: ");
        scanf("%d",&ptr[i].empNum);
        getchar();
        printf("Enter empName: ");
        gets(ptr[i].empName);
        printf("Enter Basic Pay: ");
        scanf("%d",&ptr[i].basic_pay);
    }
    printf("\n\n");
    for(int i =0 ; i<n ; i++){
        printf("--------------------------------Entry no:%d------------------------------------------------------------------------------\n",i+1);
        printf("EmpNum: %d\n",(ptr+i)->basic_pay); // (*(ptr+i)).basicpay [to provide precedence of . and * operator we use (())brackets..] 
                                                    //Or ptr[i].basicpay   ..........wrong: ptr.basicpay or (ptr+i).basic pay
        printf("EmpName: %s",ptr[i].empName);
        printf("Emp basic pay: %d\n",(*(ptr+i)).basic_pay);
    }
    printf("\nProgram Completed... thankyou");
    return 0;
}