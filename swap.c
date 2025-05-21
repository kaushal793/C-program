#include <stdio.h>
int main(){
    int num1 ,num2;
    num1=50;
    num2=20;
    printf("BEFORE SWAPPING THE NUMBERS\n");
    printf("num1 is 50 \n num2 is 20");
     
     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;
      
      printf("\nAFTER SWAPPING THE NUMBERS\n");
      printf("num1 is %d \n num2 is %d",num1,num2);

}