#include<stdio.h>

int main()
{
    int arr[9]={1,2,3,4,4,4,4,5,5};

    int count =0;
    for(int i=0; i<6; i++)
    {  
        count=0;
       for(int j=0;j<6;j++)
       {
           if(arr[i]==arr[j])
           {
             count++;
           }
       }

       printf("The occurences of %d is %d\n",arr[i],count);
    }
}