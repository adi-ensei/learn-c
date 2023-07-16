#include <stdio.h>
int main()
{
    int marks[2][4] = {{34, 43, 34, 78}, {7, 8, 9, 45}};
    // marks[1]=34;
    // marks[2]=78;
    // marks[3]=88;
    // printf("Marks of student 1 is %d\n", marks[1]);
    //  for(int i=0; i<4; i++)
    //  {
    //      printf("enter the marks of student %d\n",i);
    //      scanf("%d",&marks[i]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          //  printf(" the marks of student %d,%d is %d\n",i, j, marks[i][j]);
        printf("%d   ", marks[i][j]);
        }
        printf("\n");
    }
    // fekldfekjwfewkfew

    return 0;
}