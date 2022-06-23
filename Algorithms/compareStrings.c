#include <stdio.h>
#include <string.h>
int main(void)
{
   // compare two strings
   // big O notation: O(n) in compare two strings
   char str1[20], str2[20];
   printf("Enter two strings:\n");
   scanf("\n%s \n%s", &str1, &str2);

   // ⭐⭐⭐ strcmp returns 0 if two strings are equal
   // ⭐⭐⭐ strcmp compares case sensitively.
   if (strcmp(str1, str2) == 0)
   {
      printf("%s and %s are equal\n", str1, str2);
   }
   else
   {
      printf("%s and %s are not equal\n", str1, str2);
   }
}