/*
 * tabadd.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */


#include <stdio.h>

int main()
{
    int number;
    int counter = 1;
    printf("A\tA+3\tA+6\tA+9\n");
    scanf ("%d%", &number);
    while (number != -1) {
        while (counter <=3){
        number += 3;
        printf("\t%d", number);
        counter++;
    }
    printf("\n");
    scanf ("%d%", &number);
    counter = 1;
    }
}
