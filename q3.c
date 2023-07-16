#include <stdio.h>
int main()
{
    int n = 3443;
    int a=3543;
    int pell = 0;
    while (n != 0)
    {
        pell = pell * 10 + n % 10;
        n = n / 10;
    }
    if(pell == a)
    {

        printf("its a pallindrome\n");
    }
    else{
        printf("its not a pallindrome\n");
    }
}