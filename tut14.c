#include<stdio.h>
// int main()
// {char a=556;
// char *ptra=&a;
// ptra++;
// printf("%d\n",ptra);
// printf("%d\n",ptra+1);
int main()
{
int arr[]={1,2,3,4,5,6,89};
int*arrptr=&arr;
printf("value of array at position 1 is %d\n",arr[0]);
printf("the adress of the array at position 1 is %d\n",&arr[1]);
printf("the adress of the array at position 2 is %d\n",&arr[2]);
printf("the adress of the array at position 2 is %d\n",&arr[1]+1);

arrptr++;
printf("the value at  adress of the array at position 1 is %d\n",*(&arr[1]));
printf("the value at adress of the array at position 2 is %d\n",*(arr));
printf("the value at adress of the array at position 2 is %d\n",(&arr[1]+1));



}