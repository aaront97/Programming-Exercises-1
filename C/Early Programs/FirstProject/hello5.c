/*
 * hello5.c
 *
 *  Created on: 22 Sep 2017
 *      Author: HP-PC
 */
#include <stdio.h>
#include <math.h>
#define SIZE 1001

int isPrime(int a);

int main (void){
	int prime_set[SIZE];
	for (int i = 0; i < SIZE ; i++){
		prime_set[i] = 1;
	}
	prime_set[0] = 0;
	prime_set[1] = 0;
	for(int i = 2; i < SIZE ; i++){
		if(isPrime(i) == 1){
			for(int j = 2; i*j < SIZE; j++){
				prime_set[i*j] = 0;
			}
		}
	}
	for (int i = 0; i < SIZE; i++){
		if(prime_set[i]==1){
			printf("%d\n", i);
		}
	}
}

int isPrime(int a){
	int factors = 0;
	for(int i = 1; i <=a; i++){
		if(a % i == 0) {
			factors++;
		}
	}
	if (factors == 2){
		return 1;
	}
	else {
		return 0;
	}
}
