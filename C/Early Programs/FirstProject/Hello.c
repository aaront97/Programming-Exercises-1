/*
 * Hello.c
 *
 *  Created on: 11 Sep 2017
 *      Author: HP-PC
 */
#include <stdio.h>

int main(void) {
	float collection;
	printf("Enter total amount collected (-1 to quit):\n");
	scanf("%f",&collection);
		while (collection != -1) {
		printf("Enter name of month:\n");
		char str[25];
		scanf ("%s", str);
		printf("Total Collections: $ %.2f\n", collection);
		float countySales = 0.05 * collection;
		float stateSales = 0.04 * collection;
		float Sales = collection - countySales - stateSales;
		printf ("Sales: $ %.2f\n", Sales);
		printf ("County Sales Tax: $ %.2f\n", countySales);
		printf ("State Sales Tax : $ %.2f\n", stateSales);
		printf ("Total Sales Tax Collected: $ %.2f\n", countySales + stateSales);
		printf("Enter total amount collected (-1 to quit):\n");
		scanf("%f",&collection);
	}
}
