/*
 * hello6.c
 *
 *  Created on: 22 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>
#define SIZE 20

int recursive_linear (const int test_array[], int a, int b);

int main (void){
	int array[SIZE];
	int value;
	for(int i = 0; i < SIZE ; i++){
		array[i] = 2*i;
	}
	printf("%s", "Enter integer search key: ");
	scanf("%d", &value);
	if(recursive_linear(array, SIZE, value) != 0){
		printf("%d", recursive_linear(array, SIZE, value));
	}
	else {
		printf("not found");
	}

}

int recursive_linear (const int test_array[], int a, int b){
	int index;
	if (a < 0){
		return 0;
	}
	else {
		if (test_array[a] == b){
			return index = a;
		}
		else {
			recursive_linear(test_array, a-1, b);
		}
	}

}
