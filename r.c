#include<stdio.h>
int minimum(int a, int b, int c)
{
  int count = 0;
  while ( a != 0 && b != 0 && c != 0 )
  {
      a--;  b--; c--; count++;
  }
  return count;
}
int main (){
int p;
int q;
int r;
 printf ("enter three integers\n "); 
scanf ("%d %d %d", &p, &q, &r);
minimum(p, q, r);
printf ("the minimum of the given three integers is %d\n ", minimum(p, q, r));


} 