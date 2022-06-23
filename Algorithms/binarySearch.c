#include <stdio.h>
int main(void)
{
   // binary search
   // big O notation: O(log n) in binary search
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int key = 5;
   int low = 0;
   int high = 9;
   int mid = 0;
   while (low <= high)
   {
      mid = (low + high) / 2;
      if (array[mid] == key)
      {
         printf("%d is found at index %d\n", key, mid);
         break;
      }
      else if (array[mid] < key)
      {
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }
}