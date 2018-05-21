/**                             Decision Control Statement 
 *                program to check that the number entered by the user is even or odd 
 */
 
#include<stdio.h>
#include<conio.h>
 
int main()
{
	int x, y;
	
	printf("Enter the two number to compare :- \n");
	scanf("%d\n %d", &x, &y);
	
	if (x > y){
		printf("%d is greater than %d", x, y);
    }else{
    	printf("Here %d is greater than %d", y, x);
	}	

	getch();
	return 0;
}
