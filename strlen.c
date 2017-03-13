#include <stdio.h>
#include <stdlib.h>


int mystrlen(char *str)
{
	int count=0,i=0;
	if(str !=NULL)
	{
		while(str[i]!='\0')
		{
			count++;
			i++;
		}	
		return count;
	}
	else 
	{
		printf("Null pointer");
	}
}

int main()
{
	char a[10] = "swetha";
	char b[10] = "";
	char *c = (char *) malloc( 10 * sizeof(char));
	
		/* printf("\n String length is %d \n", strlen(a)); */
	printf("\n My string length is %d \n", mystrlen(a));
	printf("\n My string length is %d \n", mystrlen(b));
	printf("\n My string length is %d \n", mystrlen(c));
}

