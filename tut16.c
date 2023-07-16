#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    //   0  array[0] =789; it get reflected after func 1
    return 0;
}
void func2(int*ptr)
{ 
for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr+i));
    }

  *(ptr+1) =90;
}
void func3(int array[2][2])
{ for(int i =0;i<2;i++) 
{
    for(int j = 0; j < 2; j++){
        printf("the value at %d,%dis %d\n",i,j,array[i][j]);
    }
}

}
int main()
{
    int arr[2][2] = {{34, 56},{45,65}};
    //     printf("the value at 0 is %d\n", arr[0]);
    //     func1(arr);
    //     printf("the value at 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
}