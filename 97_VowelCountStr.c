#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowelCh(char ch){
    ch = tolower(ch);
    if(ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    char str[1001];
    fgets(str,1001,stdin);
    str[strcspn(str,"\n")] = '\0';
    int vCount = 0,i =0;
    while(str[i] != '\0')
    {
        if(isVowelCh(str[i])){
            vCount++;
        }
        i++;
    }
    printf("the number of vowels in entered string = %d\n",vCount);
}