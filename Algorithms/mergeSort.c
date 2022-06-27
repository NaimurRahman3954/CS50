#include <stdio.h>
int main(void)
{
   // merge sort
   // big O notation: O(n*log n) in bubble sort
   // best case: O(n*log n) in bubble sort
   int temp = 0;
   int numbers[8] = {5, 4, 3, 2, 1, 0, 9, 8};

   // for (int i = 0; i < 8; i++)
   // {
   //    for (int j = 0; j < 8 - i; j++)
   //    {
   //       if (numbers[j] > numbers[j + 1])
   //       {
   //          // swap the two elements
   //          temp = numbers[j];
   //          numbers[j] = numbers[j + 1];
   //          numbers[j + 1] = temp;
   //       }
   //    }
   // }

   for (int i = 0; i < 8; i++)
   {
      printf("%d\n", numbers[i]);
   }
}