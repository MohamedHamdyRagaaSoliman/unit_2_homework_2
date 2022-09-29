/*
 * hw2ex8.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {



	float a , b   ;
	char x;
	printf("enter operator + or - or * or divide \r\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c" , &x);
	printf("enter two operand \r\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%2f" "%2f" , &a , &b );
	float s = a+b , m = a*b , n = a-b , d = a/b;
	switch (x)
	{
	case '+' :
	printf("%.2f %c %.2f = %.2f " , a, x, b, s);
	break;
	case '-' :
		printf("%.2f %c %.2f = %.2f " , a, x, b, n);
		break;
	case '*' :
		printf("%.2f %c %.2f = %.2f " , a, x, b, m);
		break;
		case '/' :
			printf("%.2f %c %.2f = %.2f " , a, x, b, d);
			break;
}
}

