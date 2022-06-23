#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // length of string
   printf("%d\n", sizeof("Hello World"));

   // alternate way to get length of string
   printf("%d\n", strlen("Hello World"));

   // alternate way to get length of string
   int i = 0;
   string s = "Hello World";
   while (s[i] != '\0')
   {
      i++;
   }
   printf("%d\n", i);
}