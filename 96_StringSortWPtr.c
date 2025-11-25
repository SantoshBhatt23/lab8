//WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    n = 5;
    char str[n][100]; char temp[100];
    strcpy(str[0],"Santosh");
    strcpy(str[1],"Ramesh");
    strcpy(str[2],"Saksham");
    strcpy(str[3],"Mohan");
    strcpy(str[4],"Keshav");
    printf("strings before sorting:\n");
    for(int i = 0 ;i<n ;i++){
        printf("%s\t",str[i]);
    }
    printf("\n");

    //char *ptr = &str[0][0]; //pointer to the first character
    char (*ptr)[100] = str; //pointer to the first string
    for(int i = 0 ; i<n-1; i++){
        for(int j = i+1 ; j< n ; j++)
        {
            if(strcmp(ptr[i],ptr[j])>0){
                strcpy(temp,ptr[i]);
                strcpy(ptr[i],ptr[j]);
                strcpy(ptr[j],temp);
            }
        }
    }
    printf("\nStrings after sorting:\n");
    for(int i = 0 ;i<n ;i++){
        printf("%s\t",ptr[i]);
    }
    return 0;
}