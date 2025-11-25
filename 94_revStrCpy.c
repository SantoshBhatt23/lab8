//to copy rev of string 1 to another string 2 using pointer.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001] , str2[1001];
    char *ptr = str1;
    fgets(str1,1001,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    int len = strlen(str1);
    for(int i = 0; i<len ; i++)
    {
        str2[i] = ptr[len-i-1];
    }
    str2[len] = '\0';
    puts(str2);
    return 0;
}