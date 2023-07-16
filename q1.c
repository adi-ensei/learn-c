#include <stdio.h>
int main()
{int n=9;
int arr[9]={2,0,3,1,1,2,5,0,1};
int oddSum=0;
int evenSum=0;
for(int i=0; i<9; i++)
{ 
if(i%2==0)
{
    evenSum=evenSum+arr[i];
}
else{
    oddSum=oddSum+arr[i];
}


}
printf("the value of even sum is %d\n",evenSum);
printf("the value of odd sum is %d\n",oddSum);
printf("the value of there multiplication is  %d\n",oddSum*evenSum);





}