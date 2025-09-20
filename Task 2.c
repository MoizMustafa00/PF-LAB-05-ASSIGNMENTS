#include <stdio.h>
int main()
{
	int age=0;
	printf("Enter your age: \n");
	scanf("%d", &age);
	if(age>0)
	{
		if(age<12)
		{
			printf("You are a child\n");
		}
		else if(age<20)
		{
			printf("You are a teenager\n");
		}
		else if(age<60)
		{
			printf("You are an adult\n");
		}
		else
		{
			printf("You are a senior\n");
		}
	}
	else
	{
		printf("Invalid Age Input\n");
	}
	return 0;
}

