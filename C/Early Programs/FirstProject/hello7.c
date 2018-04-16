/*
 * hello7.c
 *
 *  Created on: 2 Oct 2017
 *      Author: HP-PC
 */
#include <stdio.h>
#include <math.h>

int main (void){
	unsigned long long number;
	unsigned long long factors = 0;
	unsigned long long prime_largest;
	unsigned long long test = 600851475143;
	for (unsigned long long i = 2; i <= test; i++){
		if (test % i == 0 ){
			number  = i;
		}
		for (unsigned long long j = 2; i<number; j++){
			if (number % j == 0){
				factors++;
			}
		}
		if (factors == 0){
			prime_largest = number;
		}
	}
	printf("Largest prime is %llu", prime_largest);
}

