/*
 * armstrong.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>
int main (void) {
	int binary;
	printf("Enter your binary: ");
	scanf ("%d", &binary);
	int a,b,c,d,e =0;
	int decimal;
	if (binary <=11111){
		a = binary % 10;
		b= binary % 100 / 10;
		c = binary % 1000 / 100;
		d = binary % 10000 / 1000;
		e = binary % 100000 / 10000;
		decimal = 1 * a + 2* b + 4*c + 8*d + 16*e;
		printf ("%d", decimal);
	}
	else {
		printf("Try again with 5 digits or fewer");
	}



}
