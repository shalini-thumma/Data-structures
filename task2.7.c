#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int position;
    printf("\nenter position of the element in array to be deleted: ");
    scanf("%d",&position);

    if(position>n)
    {
        printf("\ndeletion is not possible");

    }
    else
    {
        for(int i=position-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }

        printf("\nnew array:");
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

