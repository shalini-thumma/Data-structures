#include <stdio.h>

#define max 10

int queue[max];
int rear = -1, front = -1;

int main() {
    printf("IMPLEMENTATION OF CIRCULAR QUEUE USING ARRAYS:");
    int choice, val;
    while (1) {
        printf("\nAVAILABLE CHOICES ARE: \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Find\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}



void enqueue(int val)
{
    if ((front == 0 && rear == max - 1) || (rear == (front - 1) % (max - 1)))
        {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = val;
        printf("enqueue operation is successful\n");
    } else if (rear == max - 1 && front != 0) {
        rear = 0;
        queue[rear] = val;
        printf("enqueue operation is successful\n");
    } else {
        rear++;
        queue[rear] = val;
        printf("enqueue operation is successful\n");
    }
}

void dequeue()
{
    if (front == -1)
        {
        printf("underflow\n");
    }
    else if (front == rear)
    {
        printf("%d deleted from the queue\ndequeue operation is successful\n", queue[front]);
        front = rear = -1;
    }
     else if (front == max - 1)
        {
        printf("%d deleted from the queue\ndequeue operation is successful\n", queue[front]);
        front = 0;
    }
     else
        {
        printf("%d deleted from the queue\ndequeue operation is successful\n", queue[front]);
        front++;
    }
}

void find(int key)
{
    if (front == -1)
        {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    int position = 1;
    do {
        if (queue[i] == key) {
            printf("Element found at position %d\n", position);
            return;
        }
        i = (i + 1) % max;
        position++;
    } while (i != (rear + 1) % max);

    printf("Element not found in the queue\n");
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    printf("Queue elements are:\n");
    do {
        printf("%d ", queue[i]);
        i = (i + 1) % max;
    } while (i != (rear + 1) % max);
    printf("\n");
}



