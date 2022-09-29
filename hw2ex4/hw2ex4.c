/*
 * hw2ex4.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
			float a ;
			printf("enter a number ");
			fflush(stdout);
			fflush(stdin);
			scanf( "%f" , &a );
			if(a>0)
				printf(" %f number is positive\r\n" , a);
			else if(a<0)
				printf(" %f number is negative\r\n" , a);
			else
				printf(" %f you entered  zero\r\n" , a);
	return 0;
			}

