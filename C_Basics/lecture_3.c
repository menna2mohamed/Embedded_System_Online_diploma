/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Menna Mohamed
 */


#include"stdio.h"

void main()
{

	///EX 1
	printf("C programming \n");

	//EX 2
	int num;
	printf("Enter a integer :");
	fflush(stdout);
	scanf("%d" , &num);
	printf("You entered : %d \n",num);

	//EX 3
	int num1, num2;
	printf("Enter two integers :");
	fflush(stdout);
	scanf("%d" , &num1);
	scanf("%d" , &num2);
	printf("sum : %d \n",num1+num2);

	//EX 4
	float num3, num4;
	printf("Enter two numbers :");
	fflush(stdout);
	scanf("%f" , &num3);
	scanf("%f" , &num4);
	printf("product : %f \n",num3*num4);

	//EX 5
	char cc;
	printf("Enter a character :");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&cc);
	printf("ASCII value of %c = %d \n",cc,cc);

	//EX 6
	float a, b;
	printf("Enter value of a :");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	printf("\nEnter value of b :");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&b);

	int temp =b;
	b = a;
	a = temp;
	printf("After swapping , value of a : %f \n",a);
	printf("After swapping , value of b : %f \n",b);
}
