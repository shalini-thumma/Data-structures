#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],temp;
    printf("enter a string: ");
    scanf("%s",str);

    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
        {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s",str);
    return 0;
}
