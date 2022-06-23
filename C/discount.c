#include <stdio.h>
float discount(float price, float dis) // used comma to separate the two variables
{
   float dis_price;
   dis_price = price - ((dis / 100) * price);
   return dis_price;
}

int main(void)
{
   float price, oldPrice;
   printf("What is the price of the book?\n");
   scanf("%f", &oldPrice);
   price = discount(oldPrice, 15);
   printf("Discounted price of the book is $%.2f\n", price);
}