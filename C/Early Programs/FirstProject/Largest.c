/*
 * Largest.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int
main (){
     int counter = 1;
     int number;
     int largest = 0;
printf ("Enter your number, -1 to exit: \n");
scanf ("%d", &number);
while (counter <= 10 & number != -1)
  {
    if (number > largest)
      {
	largest = number;
      }
  counter++;
    printf ("Enter your number, -1 to exit: \n");
    scanf ("%d", &number);

  }
  printf ("The largest number is %d\n", largest);
}
