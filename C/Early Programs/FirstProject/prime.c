/*
 * prime.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main()
{
   int number;
   printf ("Enter your number to be checked,  1 to exit: \n");
   scanf("%d", &number);
   unsigned int x = 1;
   int number_of_factors = 0;
   while (number != -1 ){

    while (number>1 & x <= number) {
       if (number % x == 0) {
           number_of_factors++;

       }
    x++;

   }

   if (number_of_factors > 2 ) {
       printf ("Number is not a prime\n");

     }
     else {
         printf("Number is a prime\n");
     }
    number_of_factors = 0;
    printf ("Enter your number to be checked, -1 to exit: \n");
   scanf("%d", &number);
   }
}
