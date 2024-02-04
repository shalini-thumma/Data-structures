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


    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if (arr[i]==arr[j])
           {
               count=count+1;
               break;
           }
        }
    }
    printf("\ntotal number of duplicate elements in the array =%d\n",count);
    return 0;
}
