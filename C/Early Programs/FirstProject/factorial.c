/*
 * factorial.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main (void) {
	int number;
	printf ("Enter your number: ");
	scanf ("%d", &number);
	int counter = number-1;
	int factorial = number;
	while (counter >=1 ){
		factorial = factorial * counter--;
	}
	printf ("Your factorial is: %d\n", factorial);

}
