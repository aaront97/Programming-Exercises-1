/*
 * coins.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int coins (void);



int main (void){
	srand(time(NULL));
	int heads = 0;
	int tails = 0;
	for (int i = 1; i <= 1000; i++){
		if (coins() == 0){
			heads++;
		}
		else {
			tails++;
		}
	}
	printf("The number of heads is %d and the number of tails is %d", heads, tails);
}

int coins (void){
	int outcome = rand()%2;
	return outcome;
}
