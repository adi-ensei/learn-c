#include <stdio.h>
int main()
{
    int n = 5363;
    int sum = 0;
    while (n != 0)
    {
        sum=sum +n%10  ;
        printf("%d+",n%10);
        n = n/10;
    }
    printf("the value of the sum of %d\n",sum);
    printf("akshai maha ghada hae ");
}