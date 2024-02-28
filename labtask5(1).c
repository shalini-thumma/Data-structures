#include <stdio.h>

#define max 10

int queue[max];
int rear=-1,front=-1;

int main()
{
    int choice,val;
    while (1) {
        printf("\nAVAILABLE CHOICES ARE: \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Find\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value to be inserted(enqueue): ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("Enter key value: ");
                scanf("%d", &val);
                find(val);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

void enqueue(int val) {
    if(rear == max-1)
        {
        printf("Overflow\n");
    }
    else
        {
        rear++;
        queue[rear] = val;
        printf("enqueue operation is successful\n", val);
    }
}

void dequeue()
{
    if (front == -1&& rear==-1)
        {
        printf("underflow\n");

    }
    else
        {
        printf("%d deleted from the queue\ndequeue operation is successful\n",queue[front]);
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
        }
    }


void find(int key)
{
    if (front == -1)
        {
        printf("underflow\n");
    }
    else
        {
        int found = 0;
        for (int i = front; i <= rear; i++)
        {
            if (queue[i] == key)
            {
                printf("Element found at position %d\n", i - front + 1);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Element not found in the queue\n");
        }
    }
}

void display()
{
    if (front == -1)
        {
        printf("underflow\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
            {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

