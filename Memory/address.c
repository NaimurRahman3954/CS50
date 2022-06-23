#include <stdio.h>
int main(void)
{
   int n = 50;
   int *p = &n;       // pointer
   printf("%p\n", p); // format specifier for pointer is %p

   // alternatively
   printf("%p\n", &n);

   // dereference a value from an address using a pointer
   printf("%d\n", *p);
}