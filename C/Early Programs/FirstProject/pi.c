/*
 * pi.c
 *
 *  Created on: 14 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main (void){
	int iteration;
	int i=1;
	float pi = 0;
	int odd_add;
	int even_add;
	int e;
	int x = 1;
	printf("Enter no. of iterations: \n");
	scanf("%d", &iteration);
	while (i<= iteration){
		e = -1;
		while (x<=i){
		e = e + 2;
		x++;
	}
		if((i%2)!=0){
			pi = pi + 4/(float)e;
			}
		else {
			pi = pi - 4/(float)e;
		}
	x=1;
	i++;
	}
	printf("%.20f",pi);
}
