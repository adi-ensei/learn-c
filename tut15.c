#include<stdio.h>
void changevalue(int* adress)
{
    *adress=879;
}
int main()
{
    int a=23,b=24;
    printf("the value of a is %d\n",a);
    changevalue(&a);
    printf("the value of a is %d\n",a);
}