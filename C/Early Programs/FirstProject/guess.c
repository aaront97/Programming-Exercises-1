/*
 * guess.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int number;
	number = 1 + rand()%1000;
	int guess;
	int i = 0;
	printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
	scanf("%d", &guess);
	if (guess == number){
		printf("Excellent! You guessed the number!");
	}
	else {
		while (guess != number){
			if (guess < number){
				printf("Too low. Try again. \n");
				scanf("%d", &guess);
			}
			else{
				printf("Too high. Try again.\n");
				scanf("%d", &guess);
			}
			i++;
		}
	}
	if (i < 10){
		printf("Either you know the secret or you got lucky!");
	}
	else {
		if (i == 10){
			printf("Ahah! You know the secret!");
		}
		else{
			printf("You should be able to do better!");
		}
	}
}
