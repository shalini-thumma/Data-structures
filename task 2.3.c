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

    int ele;
    printf("enter key element: ");
    scanf("%d",&ele);

int low,high,mid;
    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(arr[mid]<ele)
        {
            low=mid+1;
            mid=(low+high)/2;
            }
    else if(arr[mid]==ele)
            {
                printf("key element %d is found at location %d",ele,mid+1);
                break;

            }
            else{
                high=mid-1;
                mid=(low+high)/2;

                }
    }

                if(low>high)
                    printf("key element is not found in the array");



    return 0;
}
