#include <stdio.h>
#include <string.h>
int main()
{
    char s[]="abcdef";
    int  i,temp;
   len= strlen();
   
for(int i=0 ;i<(len-1)/2);i++){

temp=s[i];
s[i]=s[len-1-i];
s[len-1-i]=temp;

}

printf("reverse of string is %s",s);
 return 0;