/*
 * hw2ex5.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n , i , sum=0 ;
	printf("enter an integer number");
	fflush(stdout);
	fflush(stdin);
	scanf("%d" , &n);
	for( i =1; i<=n ; i++)
	{
		sum+=i;

	}
	printf("sum = %d" , sum);
	return 0;
			}

