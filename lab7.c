#include <stdio.h>
#include <math.h> /* for sqrt function */

int main()
{
    int input;
    int root;
    printf("Please enter the required number : ");
    scanf("%d",&input);
    root=sqrt(input);
    printf(" Root = %d \n" , root);
    if(input==(root*root))
    {
        printf("%d is the perfect square root of %d",root,input);
    }
    else
    {
        printf("perfect square root not exist");
    }
    return 0;
}
