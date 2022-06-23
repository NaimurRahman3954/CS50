#include <stdio.h>
int main(void)
{
   // linear search
   // big O notation: O(n) in linear search
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int key = 5;
   int i = 0;
   while (i < 10)
   {
      if (array[i] == key)
      {
         printf("%d is found at index %d\n", key, i);
         break;
      }
      i++;
   }
}