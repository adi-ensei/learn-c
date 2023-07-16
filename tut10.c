#include <stdio.h>

int factorial(int num)

   {if (num == 1 || num == 0)
   {
        return 1;
    }
    else
    {
        return (num * factorial(num -1));
    }
}
int main()
{
    int a;

    printf("enter the number you want the factorial of \n");
    scanf("%d", &a);
printf("the factorial of the number %d is %d \n", a,factorial(a));
}
