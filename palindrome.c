#include <stdio.h>
int main(){
    int num,realvalue,rem,sum=0;
    printf("ENTER THE NUMBER:-");
    scanf("%d",&num);
    realvalue=num;

    while(num>0)
    {
        rem=num%10;
        sum=rem+(sum*10);
        num=num/10;
    }
    if(sum==realvalue)
    printf("PALINDROME NUMBERS");
    else ("NOT A PALINDROME NUMBER");
   

    return 0;
}