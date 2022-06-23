#include <stdio.h>
#include <math.h>
int main()
{
   // rounding error
   float f, f1;
   printf("Enter the dollar amount: ");
   scanf("%f", &f);
   int pennies = f * 100;
   printf("Pennies: %d\n", pennies); // shows error if I input 4.2

   // solution
   int pennies1 = (round)(f * 100);   // rounds to nearest integer
   printf("Pennies: %d\n", pennies1); // no error if I input 4.2
}