#include <stdio.h>
#include <string.h>  
void lenCount(char*ptr,int *wospace,int*wspace)
{   
    while(*ptr != '\0')
    {
       (*wospace)++; // common mistk *wospace++ which means rather *(wospace++) that is increase the pointer and than take dereference.
       if(*ptr != ' ')
       {
           (*wspace)++;
       }
       ptr++;
    }
}
int main()
{
    char str[1001];
    fgets(str,1001,stdin);
    str[strcspn(str,"\n")] = '\0';
    int lenwspace=0,lenwospace=0;
    lenCount(str, &lenwospace, &lenwspace);
    printf("Len of entered string(including spaces): %d\n",lenwspace);
    printf("Len of entered string (without spaces): %d\n",lenwospace);
    return 0;
}