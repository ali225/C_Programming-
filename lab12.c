
#include <stdio.h>

/*
 * Function definition and no need for function prototype
 * as the function is defined before its usage in the main function
 */

void print_min(int num1,int num2);
 int main(void)
{
	int a,b;
	/* take the two numbers from the user */
	printf("Enter first number \n");
	scanf("%d",&a);
	printf("Enter second number \n");
	scanf("%d",&b);
	print_min(a,b);
	return 0;
}

void print_min(int num1,int num2)
{
	 int min_num;
	if(num1 <= num2)
	{
		min_num =  num1;
	}
	else
	{
		min_num =  num2;
	}
	printf("The Minimum Number is : %d \n",min_num);
}

