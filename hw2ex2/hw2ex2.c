/*
 * hw2ex2.c
 *
 *  Created on: Sep 26, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	char x ;
	printf("enter an alphapet");
	fflush(stdout);
		fflush(stdin);
	scanf("%c" , &x);
	switch (x)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':


		printf("%c is a voel" , x);

	default :
		printf("%c is a consonant" , x);
		break;

	}
}

