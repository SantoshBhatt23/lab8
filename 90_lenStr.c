#include <stdio.h>
#include <string.h>

int main()
{
   char str[1001];
   fgets(str,1001,stdin);
   str[strcspn(str,"\n")] = '\0';
   int len_w_space=0,len_wo_space=0;
   int i = 0;
   while(str[i]!='\0')
   {
        len_w_space ++;
        if(str[i]!=' ')
        {
            len_wo_space++;
        }
        i++;
   }
   printf("length of string with spaces = %d",len_w_space);
   printf("\nlength of string without spaces = %d",len_wo_space);
   return 0;
}