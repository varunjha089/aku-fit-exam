/**                              Decision Control Statement 
 *                   program to check age group of a person using nested if-else
 */
 
#include<stdio.h>
#include<conio.h>
 
int main()
{
	int x, y=18; //we will ask user to enter it's age and after 18 a preson is an adult so it's default
	
	printf("Enter your age :- \n");
	scanf("%d", &x);
	
	if(x >= 65){
		printf("You are a senior citizen");
	}else{
		if(x >= y){
			printf("You are an adult");
		}else{
			printf("You are a minor");
		}
	}
		
	getch();
	return 0;
}
