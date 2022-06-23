#include <cs50.h>
#include <stdio.h>
int main(void)
{
   string answer = get_string("What is your name?\n");
   // assignment operator is used to assign the value of the variable answer to the value of the function get_string
   printf("Hello, %s\n", answer); //%s is a placeholder for the value of the variable answer
}
