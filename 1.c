#include "stdio.h"
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	age*=365;
	printf("Your age in days %d\n",age);
	return 0;
}
