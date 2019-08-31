#include <stdio.h>

int main(void)
{
	int i,j,n;
	
	printf("enter number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++) //loop for all rows
	{
		for(j=i;j<n-1;j++) printf(" "); // write the left speaces
		for(j=0;j<((2*i)+1);j++) printf("*"); // write the stars
		for(j=i;j<n-1;j++) printf(" "); // write the right spaces
		printf("\n");
	}
	return 0;
}

