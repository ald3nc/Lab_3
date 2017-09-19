/*
 ============================================================================
 Name        : Lab2Part1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int choice = 0;
	int loop = 0;

	while(loop == 0){									//loop until the user wants to exit

	printf("\nenter 1 for factorial\n");
	printf("enter 2 for leap year\n");
	printf("enter 3 for maximum\n");
	printf("enter 4 for division\n");
	printf("enter 5 to exit\n");
	scanf("%d", &choice);
	printf("\n");
	printf("\n\n");
printf("\n\n\n");

	switch (choice)
	{
		case 1:
		{
			unsigned short int number = 0;
			int x = 0;
			unsigned long result = 1;

			printf("enter a number to find the factorial\n");
			scanf("%hu", &number);
			if(number < 0 || number > 33)				//anything bigger than 33 can't be
			{											//unsigned long after factorial
				printf("\nwrong number\n");
				break;
			}
			for(x=1;x<=number;x++)
			{
				result = result * x;					//takes the number times itself
			}
			printf("factorial is %lu\n", result);
			break;
		}
		case 2:
		{
			unsigned int number = 0;
			int result = 0;
			printf("enter a number to check for leap year\n");
			scanf("%u", &number);
			result = number%4;
			if(result == 0)								//has to be divisible by 4
				{
					if(number%100 == 0)					//check if divisible by 100
						{
							if(number%400 == 0)			//if it is, has to be divisible by 400
								printf("number is a leap year\n");
							else
								printf("number is not a leap year\n");
						}
					else
						printf("\nnumber is a leap year\n");
				}
			else
				printf("number is not a leap year\n");
			break;

		}
		case 3:
		{
			float x,y = 0;
			float max;
			printf("enter the first number\n");
			scanf("%f", &x);
			printf("enter the second number\n");
			scanf("%f", &y);
			if(x==y)
			{
				printf("\nthe numbers are equal\n");
				break;
			}
			max = (x > y) ? x : y ;						//if x > y, max = x
			printf("max is %.2f\n", max);
			break;
		}
		case 4:
		{
			int x,y = 1;
			int result = 0;
			printf("enter the numerator\n");
			scanf("%d", &x);
			printf("enter the denominator\n");
			scanf("%d", &y);
			if(y==0)									//can't divide by zero
			{
				printf("cannot divide by zero\n");
				break;
			}
			result = x / y;								//division operator
			printf("the answer is %d\n", result);
			break;
		}
		default:
			loop = 1;
			break;
	}
	}
return 0;
}
