/*
 * he2ex3.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
			float a , b , c ;
			printf("enter three number : \r\n");
			fflush(stdout);
			fflush(stdin);
			scanf("%f" "%f" "%f" , &a , &b , &c);
			if(a>b &&a>c)
				printf(" the largest %f ", a);
			else if(b>c&&b>a)
				printf("the largest %f" , b);
			else
				printf("the largest %f" , c);


	return 0;
			}

