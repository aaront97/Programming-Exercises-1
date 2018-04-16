/*
 * hello3.c
 *
 *  Created on: 21 Sep 2017
 *      Author: HP-PC
 */



#include <stdio.h>
#include <math.h>

int main (void){
	int array [] = {2,1,3,5,6};
	int hold = 0;
	int smallest_value;
	int smallest_index= 0;
	for (int i = 0 ; i<5; i++){
	    smallest_value = array [i];
		for (int j = i ; j<5; j++){
			if (array [j] <= smallest_value){
				smallest_value = array [j];
				smallest_index = j;
			}
		}
		hold = array[i];
		array [i] = array [smallest_index];
		array[smallest_index]= hold;
		printf("%d\n", array[i]);
	}
	for (int i =0; i < 5; i++){
		printf("%d\n", array[i]);

}
}
