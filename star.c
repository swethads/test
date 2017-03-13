#include <stdio.h>

int main()
{
	int nrows,row,j;
	printf("How many rows: ");
	scanf("%d",&nrows);

	for(row=1; row <=nrows; row++)
	{

		for(j=1;j<=2*(nrows-row) ;j++)
			printf(" ");

		for(j=1;j<=2*row-1;j++)
			printf("* ");

		printf("\n");

	}
	return 0;
}
