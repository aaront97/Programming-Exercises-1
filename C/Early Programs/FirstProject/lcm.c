/*
 * lcm.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>
#include <math.h>

int lcm(int number1, int number2);

int main(void){
    int number1;
    int number2;
    printf("Enter your two numbers: \n");
    scanf("%d%d", &number1, &number2);
    printf("%d", lcm(number1, number2));
}

int lcm(int number1, int number2){
    int minimum = 0;
    int lcm = 1 ;
    int multiple = 1;
    int other;
    if (number1>number2){
        minimum = number2;
        other = number1;
    }
    else {
        minimum = number1;
        other = number2;
    }
    for(int i = 1; i != 0; i++){
        if (i * minimum % other == 0 ){
            multiple = i;
            break;
        }
    }
    return multiple * minimum;
}
