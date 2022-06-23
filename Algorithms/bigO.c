#include <stdio.h>
int main()
{
   // big O notation: O(n) in for loop
   int count = 0;
   for (int i = 0; i < count; i++)
   {
      /* code */
   }

   // big O notation: O(1) in if statement
   if (count == 0)
   {
      /* code */
   }

   // big O notation: O(n^2) in nested for loop
   for (int i = 0; i < count; i++)
   {
      for (int j = 0; j < count; j++)
      {
         /* code */
      }
   }

   // big O notation: O(n) in while loop
   while (count < 10)
   {
      /* code */
   }

   // big O notation: O(n) in do-while loop
   do
   {
      /* code */
   } while (count < 10);
}
