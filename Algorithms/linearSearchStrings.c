#include <stdio.h>
#include <string.h>
int main(void)
{
   // linear search strings
   // big O notation: O(n) in linear search strings

   char name[20];
   char friends[8][20] = {"Riaj", "Rahi", "Hasan", "Sazzad", "Rakib", "Fardin", "Fariha", "Zaki"};
   int answer = strlen(friends);
   printf("Enter a name to search: ");
   scanf("%s", &name);

   for (int i = 0; i < 8; i++)
   {
      if (strcmp(name, friends[i]) == 0)
      {
         printf("%s is found at index %d\n", name, i);
         break;
      }
   }
}