#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 24;
    bool a = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("the number %d is a composite number\n",n);
            a=false;
            break;
        }
    }
    if(a==true){
        printf("the number %d is a prime number ",n);
    }
}