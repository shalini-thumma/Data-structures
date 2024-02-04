#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("\nenter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    printf("\nSum of all elements of the array = %d",sum);

    return 0;
}
