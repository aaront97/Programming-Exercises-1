/*
 * floyd.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main (void){
	int i = 1;
	int outercount = 1;
	while (outercount<=10){
		int innercount=1;
		while(innercount<=outercount){
			printf("%d", i);
			innercount++;
			i++;
		}
		printf("\n");
		outercount++;
	}
}
