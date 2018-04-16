/*
 * productcode.c
 *
 *  Created on: 14 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main (void){
	int count1 = 0;
	int count2= 0;
	int count3= 0;
	int count4= 0;
	int count5= 0;
	int code;
	int x;
	printf("Enter your product code separated by a space, EOF to end: ");
	scanf("%d %d",&code,&x);
	while (code != -1 && x!=-1){
		switch (code){
		case 1:
			count1 += x;
			break;
		case 2:
			count2 += x;
			break;
		case 3:
			count3 += x;
			break;
		case 4:
			count4 += x;
			break;
		case 5:
			count5 += x;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("Please enter a code between 1-5");
			break;
		}
		printf("Enter your product code separated by a space, EOF to end: ");
		scanf("%d %d",&code,&x);
	}
	double total = (float)count1*2.98 + (float)count2*4.50 + (float)count3*9.98 + (float)count4 * 4.49 + (float)count5*6.87;
	printf("This week's total gross sales: $ %.2f", total);
}
