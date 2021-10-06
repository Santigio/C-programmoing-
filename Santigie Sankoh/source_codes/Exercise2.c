/* C program to calculate the sum of all the positive digits of the number. */

#include<stdio.h>

int main()
    {
	int num = 0, sum = 0, conn = 0;

	printf("Please enter a positive integer: ");
	scanf("%d",&num);
 
	while(num > 0)
	{
		conn = num % 10;
		num = num / 10;
		sum = sum + conn;
	}
	
	printf("Result: %d\n",sum);
	return 0;
}