#include <stdio.h>
void printstar(int star)
{
    for (int i = 0; i <star; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{int n;
printf("enter the  number of rows of star to print");
scanf("%d", &n);
printstar(n);
printf("%d\n",&n) ;

}