#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks ;
    int fav_char;
 char name[56];
};

int main()
{
    union   Student s1;
        s1.id = 1;
    s1.marks = 56;
    s1.fav_char = 'p';
    strcpy(s1.name, "Adithyan");
    printf("this name is  %s \n", s1.name);
    printf("this marks is  %d \n", s1.marks);
    printf("this id is  %d \n", s1.id);
    printf("this fav charecter is  %c \n", s1.fav_char);
}