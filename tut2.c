#include <stdio.h>
int main()
{ int age ;
    
    
     printf("enter your age ");
scanf("%d",&age);
printf("you have entered %d as your age\n",age); 
if (age>=18)
{ printf("you can vote ");}
else if (age>=10)
{ printf("you are between 10 to 18 years of age groups\n");}
else {printf("you cannot vote\n");
}




return 0;




}