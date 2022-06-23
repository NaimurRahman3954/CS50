#include <stdio.h>
int main()
{
   // print 3 by 3 matrix
   int i, j;
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d ", i * 3 + j);
      }
      printf("\n");
   }
}