#include <stdio.h>
#include <string.h>

// other ways to define a struct
typedef struct
{
   char name[20];
   int age;
   char address[20];
} person;

int main(void)
{
   person people[2];
   people[0].age = 20;
   people[1].age = 30;
   printf("%d\n", people[0].age);
}