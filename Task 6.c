#include <stdio.h>
int main()
{
	int num1=0, num2=0, max=0;
	printf("Enter 2 numbers: \n");
	scanf("%d %d", &num1, &num2);
	max=num1>num2?num1:num2;
	printf("Maximum number is %d", max);
	return 0;
}
