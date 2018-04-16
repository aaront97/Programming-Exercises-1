/*
 * factorial.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main (void) {
	int number = 1;
	double counter = 1;
	double iteration = 63;
	double factorial = 1;
	double iteration_counter = 1;
	double approximation = 1;
	while (iteration_counter <= iteration){

		while (counter <= iteration_counter ){
			factorial = factorial * counter;
			counter++;
		}
	approximation = approximation + 1/(factorial);
	factorial = 1;
	counter = 1;
	iteration_counter++;
	}
	printf("Your approximation is: %.64f\n", approximation);
	}

