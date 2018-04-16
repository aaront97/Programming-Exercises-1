/*
 * temperature.c
 *
 *  Created on: 14 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main(void){
	int celcius;
	double fahrenheit;
	printf("%7s%25s", "Celcius", "Fahrenheit\n");
	for (celcius = 30; celcius <= 50; celcius++){
		fahrenheit = (double) 9/5 * (double)celcius + 32;
		printf ("%-7d%25.2f\n", celcius, fahrenheit);
	}
}
