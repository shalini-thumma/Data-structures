#include <stdio.h>

void movedisk(char from, char to, int disk)
{
    printf("\nMove disk %d from %c to %c", disk, from, to);
}

void tower(int num, char source, char dest, char temp)
{
    if (num == 0)
        return;

    tower(num - 1, source, temp, dest);
    movedisk(source, dest, num);
    tower(num - 1, temp, dest, source);
}

int main()
{
    int num;
    printf("Enter number of disks: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("enter valid number of disks");
        return 0;
    }

    printf("Tower of Hanoi :\n");
    tower(num, 'A', 'B', 'C');

    return 0;
}
