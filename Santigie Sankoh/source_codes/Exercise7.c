/*C program to print two opposite pyramid */

#include<stdio.h>

#define max	5

int main()
{
	int x,y;
	int whitespc=4;
	/*run loop (parent loop) till number of rows*/
	for(x=0;x< max;x++)
	{
		/*loop for initially whitespc, before star printing*/
		for(y=0;y< whitespc;y++)
		{
			printf(" ");
		}
		for(y=0;y<=x;y++)
		{
			printf("* ");
		}
		
		printf("\n");
		whitespc--;
	}
	/*repeat it again*/
	whitespc=0;
	/*run loop (parent loop) till number of rows*/
	for(x=max;x>0;x--)
	{
		/*loop for initially whitespc, before star printing*/
		for(y=0;y< whitespc;y++)
		{
			printf(" ");
		}
		for(y=0;y< x;y++)
		{
			printf("* ");
		}
		
		printf("\n");
		whitespc++;
	}
    return 0;
}
