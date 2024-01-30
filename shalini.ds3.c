#include <stdio.h>

int power(int base, int exponent);
int calpow(int base, int exponent, int (*p)(int, int));

int main()
{
    int base,result,exponent;
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter exponent: ");
    scanf("%d",&exponent);
    result = calpow(base,exponent,power);
    printf("%d to the power %d = %d\n",base,exponent,result);
    return 0;
}
int power(int base, int exponent)
 {
    int result = 1;
    while(exponent > 0)
        {
        result=result*base;
        exponent--;
        }
    return result;
}
int calpow(int base,int exponent,int (*p)(int, int))
{
    return p(base, exponent);
}
