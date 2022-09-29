/*
 * hw2ex7.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n , i , fact=1 ;
	printf("enter an integer number");
	fflush(stdout);
	fflush(stdin);
	scanf("%d" , &n);
	if(n<0)
		printf("error!!! factorial of negative number doesnot exist\r\n");
		else
		{
	for( i =1; i<=n ; i++)
	{
		fact*=i;

	}
	printf("factorial = %d" , fact);
	return 0;
			}}

