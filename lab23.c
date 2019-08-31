#include <stdio.h>

/*
 * Description:
 * Program to sort the array elements using selection sorting algorithm
 */

void selection_sorting(int array[],const int size)
{
    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++){
            if(array[min]>array[j])
                min=j;
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}
int main()
{
    const int arr_size = 5;
    int arr[arr_size],i;

    printf("Enter the required five numbers to be sorted:\n");
    for(i=0;i<arr_size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting: \n");
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    selection_sorting(arr,arr_size); // pass the array to bed sorted using function

    printf("Array After Sorting: \n");
    for(i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
