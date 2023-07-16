#include<stdio.h>
int main(){// print a multiplication table of a number entered by the user in pretty form 
// example :
// enter the number you want to multiplication of 
// 6
// table of 6 is:
// 6*1=5
// .
// .
int num;
printf("Enter the number you want the multiplication table of\n");
scanf("%d",&num);
printf("the multiplication table of %d is:\n",&num);
// printf("%d*1=%d\n",i,i*1);
// printf("%d*2=%d\n",i,i*2);
// printf("%d*3=%d\n",i,i*3);
// printf("%d*4=%d\n",i,i*4);
// printf("%d*5=%d\n",i,i*5);
// printf("%d*6=%d\n",i,i*6);
// printf("%d*7=%d\n",i,i*7);
// printf("%d*8=%d\n",i,i*8);
// printf("%d*9=%d\n",i,i*9);
// printf("%d*10=%d\n",i,i*10);
for(int i=1; i<11; i++) 
{
    printf("%d*%d=%d\n",num,i,num*i);
}
return 0;
}
