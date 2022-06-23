#include <stdio.h>
#include <string.h>
int main(void)
{
   // phone number search
   // big O notation: O(n) in phone number search
   char search[20];
   char name[10][20] = {"Riaj", "Rahi", "Hasan", "Sazzad", "Rakib", "Fardin", "Fariha", "Zaki", "Rakib", "Riaj"};
   char phoneNumber[10][20] = {"0152-1111111", "0177-9888888", "0177-9888889", "0177-9888890", "0177-9888891", "0177-9888892", "0177-9888893", "0177-9888894", "0177-9888895", "0177-9888896"};
   printf("Enter a name to search: ");
   scanf("%s", &search);
   for (int i = 0; i < 10; i++)
   {
      if (strcmp(search, name[i]) == 0)
      {
         printf("%s is found at index %d and his phone number is %s\n", search, i, phoneNumber[i]);
         break;
      }
   }
}