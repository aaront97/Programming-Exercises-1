/*
 * checkerboard.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main (void){
	int inner;
	int outer;
	int counter = 1;
	int rows;
	int double_rows;
	printf("Enter how many rows (even): ");
	scanf("%d", &rows);
	double_rows = rows/2;
	while (counter <= double_rows){
		int first_row = 1;
		while (first_row<=8){
			printf ("* ");
			first_row++;

		}
		puts( "" );
		printf(" ");
		int double_row = 1;
		while(double_row <=8){
			printf("* ");
			double_row++;
		}
		printf("\n");
		counter++;
	}

}
