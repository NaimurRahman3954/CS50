#include <stdio.h>
#include <string.h>

int main(void)
{
   // struct data type
   // big O notation: O(1) in struct data type

   struct student
   {
      char name[20];
      int age;
      char address[20];
   }; // end of struct student. semicolon is required.

   struct student s1;
   printf("Enter name, age and address of student:\n");
   scanf("%s %d %s", &s1.name, &s1.age, &s1.address);
   printf("Name: %s\nAge: %d\nAddress: %s\n", s1.name, s1.age, s1.address);
}