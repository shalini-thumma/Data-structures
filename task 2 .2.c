#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of an array:\n");
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] element ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nentered array ,\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nreversed array ,\n");
    for(int i=n-1;i>=0;i--)
    {
       printf("%d ",arr[i]);
    }
    return 0;

}
