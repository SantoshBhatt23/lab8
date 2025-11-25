//A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0 ;
    char *str;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';
    int i =0;
    while(str[i] !='\0'){
        switch(str[i])
        {
            case(' ') :
            case('!') :
            case (',') : 
            case ('.') : count++;
                             
        }
        i++;
    }
    printf("No of words in entered string = %d",count);
}