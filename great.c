#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,num3;
    printf("enter the value of num1-");
    scanf("%d",&num1);

     printf("\nenter the value of num2-");
      scanf("%d",&num2);

      printf("\nenter the value of num3-");
      scanf("%d",&num3);

if (num1>num2 && num1>num3)
            printf("num1 is great");

else if (num2>num3 && num2>num1)
                    printf("num2 is great");
else 
               printf("num3 is great");
               
return 0;
}