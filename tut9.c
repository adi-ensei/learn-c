#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
void printstar(int n){
    for(int i=0; i<n; i++)
    {printf("%c ", '*');}
    printf("%c ", '*');

}
int maker() {
    int i;   
    printf("enter a valid number\n");
    scanf("%d", &i);
    return i;
    
}

int main()
{int a,b,c;
 a=89;
b=78;
 c=maker();

// printf("entererd number is %c\n", i);
 //printstar(7);
printf("the value of c is %d \n",c);








    return 0;
}