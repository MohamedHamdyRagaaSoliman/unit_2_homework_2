/*
 * hw2ex6.c
 *
 *  Created on: Sep 27, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
			char x;
			printf("enter a charcter : " );
			fflush(stdout);
			fflush(stdin);
			scanf("%c" , &x);
			if(x<=122 && x>=97)
				printf(" %c : is an alphabet " , x);
			else if(x<=90 && x>=65)
				printf(" %c : is an alphabet " , x);
			else
				printf(" %c : is not an alphabet " , x);
			}

