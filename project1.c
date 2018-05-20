/* 
 *This programm will ask user to enter the two integer and print the sum of those two number
 */
 
#include<stdio.h>
#include<conio.h>

#define VARUN main

int VARUN()
{
	int x, y, z;
	
	printf("Enter any two number :-");
	scanf("%d\n %d", &x, &y);
	
	z = x + y;
	
	printf("The sum of the number %d and %d you entered is %d", x, y, z);
	
	getch();
	return 0;
}
