#include <stdio.h>
int factorial(int number)
{
    if(number==1 || number==0)
    return 1;
else 
return(number*factorial(number-1));

}
int main(){
    int num;
    printf("ENTER THE NUMBER TO CALCULATE FACTORIAL:-");
    scanf("%d",&num);
    printf("FACTORIAL OF NUMBER %d IS %d",num,factorial(num));
    return 0;
}