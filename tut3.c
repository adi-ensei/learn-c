#include<stdio.h>
int main()
{
    
    int age;
    printf("enter your age");
scanf("%d",&age);
switch (age)
{
case 3:
   printf("the age is 3\n");
    // break;
case 23:
   printf("the age is 23\n");  //switch k andar bhi switch lagaya ja sakta hae 
case 13:
   printf("the age is 13\n");
default:
 printf("the age is not 3,13or23\n");
    break;
}











}