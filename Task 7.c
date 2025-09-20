#include <stdio.h>
int main()
{
	int rating=0;
	printf("Give rating (1-5) for the movie \"The Lion King\": \n");
	scanf("%d", &rating);
	if(rating==1)
	{
		printf("Terrible\n");
	}
	else if(rating==2)
	{
		printf("Poor\n");
	}
	else if(rating==3)
	{
		printf("Average\n");
	}
	else if(rating==4)
	{
		printf("Good\n");
	}
	else if(rating==5)
	{
		printf("Excellent\n");
	}
	else
	{
		printf("Invalid Rating Input\n");
	}
	return 0;
}

