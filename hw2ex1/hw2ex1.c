/*
 * hw2ex1.c
 *
 *  Created on: Sep 26, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("enter an integer you want to check : \r\n");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &x);
	if(x%2==0)
		printf("%d is even " ,x);
	else
		printf("%d is odd " ,x);

			}

