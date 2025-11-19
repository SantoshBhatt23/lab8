#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001] , str2[1001];
    fgets(str1,1001,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    int len = strlen(str1);
    for(int i = 0; i<len ; i++)
    {
        str2[i] = str1[len-i-1];
    }
    strcat(str2,"\0");
    puts(str2);
    return 0;
}