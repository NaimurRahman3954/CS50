#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
   char name[15];
   printf("Enter your name in smaller case (e.g. naim): ");
   scanf("%s", name);
   printf("Your name is %s", name);
   for (int i = 0; i < strlen(name); i++)
   {
      name[i] = toupper(name[i]); //⭐⭐⭐ converts to uppercase
   }
   printf("Your name is %s\n", name);

   // alternate solution
   for (int i = 0; i < strlen(name); i++)
   {
      if (name[i] <= "a" && name[i] >= "z")
      {
         printf("%c", int(name[i] - 32));
      }
      else
      {
         printf("%c", name[i]);
      }
   }
}