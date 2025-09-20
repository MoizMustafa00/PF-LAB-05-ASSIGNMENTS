#include <stdio.h>
int main()
{
	char color='0';
	printf("Enter a color (R, Y ,G): \n");
	scanf("%c", &color);
	if(color=='R')
	{
		printf("Stop");
	}
	else if(color=='Y')
	{
		printf("Caution");
	}
	else if(color=='G')
	{
		printf("Go");
	}
	else
	{
		printf("Invalid Color Input");
	}
	return 0;
}

