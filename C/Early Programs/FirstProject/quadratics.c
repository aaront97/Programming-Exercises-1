/*
 * quadratics.c
 *
 *  Created on: 18 Sep 2017
 *      Author: HP-PC

*/

#include <stdio.h>
#include <math.h>

void quadratics(double a,double b, double c);

int main(void){
	double a;
	double b;
	double c;
	printf("Enter your a,b,c: \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	quadratics(a,b,c);
}

void quadratics(double a,double b, double c){
	double d = b*b - 4*a*c;
	double root1;
	double root2;
	if (d < 0) {
		printf("Roots are complex, try again");
	}
	else {
		root1 = (-b + sqrt(d)) / 2*a;
		root2 = (-b- sqrt(d)) / 2*a;
	}
	if (root1 == root2){
		printf("Your root is %.2lf", root1);
	}
	else {
		printf("Your roots are: %.2lf and %.2lf", root1, root2);
	}
}
