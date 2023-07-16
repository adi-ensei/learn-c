#include<stdio.h>
int main()
{
label:
printf("we are learning goto\n");
goto end;
printf("yosu");

goto label;
end :
printf("we are at end of goto");
return 0;





}