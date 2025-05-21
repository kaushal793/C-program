#include <stdio.h>
 int main(){
//     struct student{
//         char name[20];
//         int rollno;
//         int id;
//         int class;
//   }student[100];
//   int i,total;

//   printf("Enter the total number of students:");
//   scanf("%d",&total);

//   for(i=1;i<=total;i++){
//     printf("Enter the %d student name:",i);
//     scanf("%s",&student[i].name);

//     printf("Enter the %d studdent roll no:",i);
//     scanf("%d",&student[i].rollno);

//     printf("Ente the %d student id:",i);
//     scanf("%d",&student[i].id);

//     printf("Enter the %d student class:",i);
//     scanf("%d",&student[i].class);
// }
// }
float num1,num2;
int num;

printf("Enter the 1st floating number:");
scanf("%f",&num1);
printf("Enter the 2nd floating number:");
scanf("%f",&num2);
num=num1+num2;
printf("1st floating number is %.2f\n",num1);
printf("2nd floating number is %.2f\n",num2);
printf("The sum of the given number is %d",num);

 }