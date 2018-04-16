/*
 * main.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main (void){
	int static count;
	count = 0;
	count++;
	printf("%d", &count);
	main();
}
