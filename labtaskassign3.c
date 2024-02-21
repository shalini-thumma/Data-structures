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

int operand(char c)
{
    return (c >= '0' && c <= '9');
}

int postfix(char *result)
{
    int i, operation1, operation2;
    for (i = 0; result[i] != '\0'; i++)
    {
        if (operand(result[i]))
        {
            push(result[i] - '0');
        }
        else
        {
            operation2 = pop();
            if (operation2 == -1)
            {
                printf("Error: Invalid expression\n");
                return -1;
            }
            operation1 = pop();
            if (operation1 == -1)
            {
                printf("Error: Invalid expression\n");
                return -1;
            }
            switch (result[i])
            {
            case '+':
                push(operation1 + operation2);
                break;
            case '-':
                push(operation1 - operation2);
                break;
            case '*':
                push(operation1 * operation2);
                break;
            case '/':
                push(operation1 / operation2);
                break;
            }
        }
    }
    return stack[top];
}

int main()
{
    char infix[50];
    char k;
    printf("Enter the infix expression : ");
    scanf("%s", infix);
    printf("\n");

    int i = 0;
    char result[100];
    int j = 0;
    while (infix[i] != '\0')
    {
        if (alphanum(infix[i]))
        {
            result[j++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((k = pop()) != '(')
            {
                result[j++] = k;
            }
        }
        else
        {
            while (precedence(stack[top]) >= precedence(infix[i]))
            {
                result[j++] = pop();
            }
            push(infix[i]);
        }
        i++;
    }
    while (top != -1)
    {
        result[j++]=pop();
    }
    result[j]='\0';
    printf("postfix expression: %s\n",result);
    printf("value of the postfix expression after evaluation: %d\n",postfix(result));

    return 0;
}
