/*
 * hello4.c
 *
 *  Created on: 22 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 13

int main (void){
	srand(time(NULL));
	int frequency[SIZE] = {0};
	for (int i = 1; i < 36000; i++ ){
		int result = (1 + rand()%6) + (1 + rand()%6);
		++frequency[(result)];
	}
	for (int i = 0; i < SIZE; i++){
		printf("%d\t%d\t%.2f\n", i, frequency[i], (float)frequency[i]/36000);
	}
}

