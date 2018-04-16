/*
 * isPerfect.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>
#include <math.h>

void isPerfect (int number);

int main (void) {
    int number;
    for (number = 1; number<= 1000000; number++){
    		isPerfect(number);

    }
}


void isPerfect(int number){
    int sumPerfect = 0;
    for (int i = 1; i < number; i++){
        if (number % i == 0) {
            sumPerfect += i;
        }
    }
     if (sumPerfect == number){
        printf("%d\n", number);
    }
}
