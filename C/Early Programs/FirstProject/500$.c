/*
 * 500$.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main (void){
	int counter = 1;
	while (counter <=500){
		if (counter % 50 != 1){
			printf("$ ");
		}
		else {
			printf("\n$ ");
		}
		counter++;
	}
}
