#include <cs50.h>
#include <stdio.h>
int main(void)
{
   int x = get_int("x: ");
   if (x % 2 == 0)
   {
      printf("%i is even", x);
   }
   else
   {
      printf("%i is odd", x);
   }
}