#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int val,position;
    printf("\nenter the value to be inserted:");
    scanf("%d",&val);
    printf("\nenter the position of the inserted value:");
    scanf("%d",&position);

    n++;
    for (int i=n-1;i>=position;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[position-1]=val;

        printf("\nnew array: ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

        return 0;
}
