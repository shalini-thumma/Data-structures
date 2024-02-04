#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[10];
    printf("enter the elements of an array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("the entered array is as follows:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
