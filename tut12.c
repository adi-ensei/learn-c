#include<stdio.h>
int main(){
printf("lets learn pointers\n");
int a=45;
int*ptra=&a;
int*ptr2=NULL;
printf("the addresss  of a is %p\n",&ptra);
printf("the value of a is %d\n",*ptra);
printf("the value of a is %d\n",*ptra);
printf("the value of some garbage value is %p\n",ptr2);



}