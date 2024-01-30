#include <stdio.h>
int main()
{
    int a,b,*p,*q,temp;
    printf("before swapping ,\n");
    printf("value of a =");
    scanf("%d",&a);
    printf("value of b =");
    scanf("%d",&b);

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("after swapping, \n");
    printf("value of a = %d\nvalue of b = %d ",*p,*q);
    return 0;
}
