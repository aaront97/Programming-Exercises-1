/*
 * square.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC

 */

#include <stdio.h>

int main()
{
    int assigned;
    int counter = 1;
    scanf("%d", &assigned);
    while (counter <= assigned) {
        int innercount = 1;
        while (innercount <= assigned ){
            printf("*");
            innercount++;
        }
    printf("\n");
    counter++;
    }
}
