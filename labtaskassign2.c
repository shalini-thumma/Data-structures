#include <stdio.h>

char stack[50];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int alphanum(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int precedence(char k)
{
    if (k == '(')
        return 0;
    if (k == '+' || k == '-')
        return 1;
    if (k == '*' || k == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char k;
    printf("Enter the infix expression : ");
    scanf("%s", exp);
    printf("\n");

    int i = 0;
    while (exp[i] != '\0')
    {
        if (alphanum(exp[i]))
            printf("%c ", exp[i]);
        else if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            while ((k = pop()) != '(')
                printf("%c ", k);
        }
        else
        {
            while (precedence(stack[top]) >= precedence(exp[i]))
                printf("%c ", pop());
            push(exp[i]);
        }
        i++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}
