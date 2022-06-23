#include <stdio.h>
int main(void)
{
   // selection sort
   // big O notation: O(n^2) in selection sort
   // best case: O(n^2) in selection sort

   int temp = 0;
   int numbers[8] = {5, 4, 3, 2, 1, 0, 9, 8};
   for (int i = 0; i < 8; i++)
   {
      if (numbers[i] > numbers[i + 1])
      {
         temp = numbers[i];
         numbers[i] = numbers[i + 1];
         numbers[i + 1] = temp;
      }
   }
   for (int i = 0; i < 8; i++)
   {
      printf("%d\n", numbers[i]);
   }

   // //selection sort
   // int temp = 0;
   // int numbers[8] = {5, 4, 3, 2, 1, 0, 9, 8};
   // for (int i = 0; i < 8; i++)
   // {
   //    for (int j = i + 1; j < 8; j++)
   //    {
   //       if (numbers[i] > numbers[j])
   //       {
   //          temp = numbers[i];
   //          numbers[i] = numbers[j];
   //          numbers[j] = temp;
   //       }
   //    }
   // }
}