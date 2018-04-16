/*
 * triangle.c
 *
 *  Created on: 13 Sep 2017
 *      Author: HP-PC
 */

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int largest;
    int middle;
    int smallest;
    printf("Enter your three digits \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b){
        if (a>c){
            a=largest;
            if(b>c){
                b=middle;
                c=smallest;
            }
            else{
                c=middle;
                b=smallest;
            }
        }
        else {
            c=largest;
            a=middle;
            b=smallest;
        }
        }
    else {
        if(b>c){
            b=largest;
            if (a>c){
                a = middle;
                c = smallest;
            }
            else {
                c = middle;
                a = smallest;
            }
        }
        else {
            c = largest;
            b = middle;
            a = smallest;
        }
    }
    if (smallest+middle>largest){
        printf("Set of numbers are valid");
    }
    else {
        printf("Invalid");
    }
}

