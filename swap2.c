//swapping 2 numbers with the use of third variable
#include <stdio.h>
int main(){
    int num1 ,num2,temp;
   num1 =40;
    num2 =50;
    printf("BEFORE SWAPPING THE NUMBERS\n");
    printf("num1 is 40 \n num2 is 50\n");
    
    temp=num1;
    num1=num2;
    num2=temp;
     printf("AFTER SWAPPING THE NUMBERS\n");
     printf("num1 is %d \n num2 is %d",num1,num2);

     return 0;

}