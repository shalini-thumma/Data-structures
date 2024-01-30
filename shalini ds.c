#include <stdio.h>
int main()
{
    int a[20],sum=0,size,*ptr;
    printf("enter the size of an array :");
    scanf("%d",&size);
    printf("enter the elements of an array:\n");
    for(int i=0;i<size;i++)
    {
        printf("enter a[%d] element = ",i);
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(int i=0;i<size;i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of the elements of an array=%d",sum);
    return 0;
}
