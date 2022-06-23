#include <stdio.h>
int main()
{
   // truncation error
   int i, j;
   printf("Enter a number: ");
   scanf("%d", &i);
   printf("Enter another number: ");
   scanf("%d", &j);
   float f = i / j;
   printf("%f\n", f); // truncation error

   // solution
   float f1 = (float)i / j;
   printf("%f\n", f1); // no truncation error
}