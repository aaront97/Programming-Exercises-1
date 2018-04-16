/*
 * convert256.c
 *
 *  Created on: 14 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int binary = 0;
    int octal;
    int hex;

    printf("%7s%15s%20s%30s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
    for (i = 1; i <=256 ; i++ ){
        printf("%7d", i);
        int rem = 0;
        int j = i;
        int k = 1;
            while(j != 0 ){
                rem = j % 2;
                j = j/2;
                binary = binary + k*rem;
                k= k*10;
            }
        printf ("%15d", binary);
        printf("%20o", i);
        printf("%30X", i);
        printf("\n");
        binary = 0;

    }
}

