#include<stdio.h>

void main()
{
    int arr[3];
    int   i;
    for (i = 0; i < 3; i++)
    {
        arr[i] = 2*i;
    }
	for (i = 0; i < 3; i++)
	{
	    printf("arr[%d] = \n",arr[i]);
	}
}
