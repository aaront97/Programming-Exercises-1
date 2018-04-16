/*
 * armstrong.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>
int main (void) {
	int arm_numb = 100;
	while (arm_numb <=999){
		int a = arm_numb % 10;
		int b = arm_numb % 100 / 10;
		int c= arm_numb % 1000 /100;
		if (arm_numb== a*a*a + b*b*b +c*c*c) {
			printf("%d\n", arm_numb);

		}
		arm_numb++;
	}



}
