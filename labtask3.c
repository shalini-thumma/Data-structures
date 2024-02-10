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
    printf("enter ele:");
    scanf("%d",&ele);
    int temp=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("successful search: \n%d is present at location %d.",ele,i+1);
            temp=1;
            break;
        }
    }
    if(temp!=1)

        {
            printf("unsuccessful search: \n%d is not present in the array.",ele);

        }

    return 0;
}
