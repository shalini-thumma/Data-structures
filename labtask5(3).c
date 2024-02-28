#include <stdio.h>
#include <stdlib.h>

#define N 4

typedef struct {
    int row;
    int col;
} Queen;

Queen stack[N];
int top = -1;

void push(int row, int col) {
    if (top == N - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    top++;
    stack[top].row = row;
    stack[top].col = col;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    top--;
}

int isvalid(int row, int col) {
    for (int i = 0; i <= top; i++) {
        if (stack[i].col == col || stack[i].row + stack[i].col == row + col || stack[i].row - stack[i].col == row - col) {
            return 0;
        }
    }
    return 1;
}

void printSolution() {
    printf("\nSolution:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (stack[i].col == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
}

void solveNQueens() {
    int row = 0, col = 0;
    while (row < N) {
        while (col < N) {
            if (isvalid(row, col)) {
                push(row, col);
                break;
            } else {
                col++;
            }
        }
        if (top == -1) {
            printf("No solution exists\n");
            return;
        }
        if (col == N) {
            col = stack[top].col + 1;
            row = stack[top].row;
            pop();
            continue;
        }
        if (top == N - 1) {
            printSolution();
            col = stack[top].col + 1;
            row = stack[top].row;
            pop();
            continue;
        }
        row++;
        col = 0;
    }
}

int main() {
    solveNQueens();
    return 0;
}
