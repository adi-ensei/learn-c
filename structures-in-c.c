#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    int fav_character;
    char name[34];
} adi, akshai, anand;
//  struct Student adi, akshai, anand;
void print()
{
    printf("%s\n", adi.name);
}
int main()
{

    adi.id = 1;
    akshai.id = 2;
    anand.id = 3;
    adi.marks = 49;
    akshai.marks = 12;
    anand.marks = 50;
    adi.fav_character = 'p';
    akshai.fav_character = 'p';
    anand.fav_character = 'p';
    strcpy(adi.name, "bankai adi");
    // printf("adi got %d marks\n", adi.marks);
    // printf("adi name is %s\n", adi.name);
    print();
}