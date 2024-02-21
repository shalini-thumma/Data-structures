#include <stdio.h>
#define size 10

void push();
void pop();
void display();
void peek();
int stack[size];
int top=-1;
void main()

{
    int value,choice;
    while(1)
    {

        printf("\n\nAVAILABLE CHOICES ARE :\n");
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
        printf("\n\nenter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the value to be inserted: ");
            scanf("%d",&value);
             push(value);
            break;
            case 2:
                pop();
                break;
                case 3:
                    peek();
                    break;
                    case 4:
                        display();
                        break;
                        case 5:
                            exit(0);
                            default:
                            printf("\ninput error");
                            }
                            }
                            }
                            void push(int value)
                            {
                                if(top == size-1)
                                printf("\nOverflow");
                                else
                                {
                                    top++;
                                    stack[top] = value;
                                    printf("\nInserted successfully");
                                    }
                                    }
                                    void pop()
                                    {
                                        if(top == -1)
                                        printf("\nUnderflow");
                                        else
                                        {
                                            printf("\nDeleted successfully : %d", stack[top]);
                                                         top--;
                                                         }
                                                          }

                                                          void peek()
                                                          {
                                                               if(top == -1)
                                                                printf("\nUnderflow");
                                                               else
                                                                {
                                                                    printf("\nStack top most element is: %d\n",stack[top]);
                                                               }
                                                          }

                                                               void display()
                                                               {
                                                                   if(top == -1)
                                                                    printf("\nUnderflow");
                                                                   else
                                                                    {

                                                                   printf("\nElements in the stack are:\n");
                                                                   for(int i=top; i>=0; i--)
                                                                    printf("%d\n",stack[i]);
                                                                   }
                                                               }

