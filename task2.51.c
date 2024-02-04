#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array: ");
    for (int i = 0; i < n; i++) {
        int uniq = 1;  // Reset uniq for each element
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                uniq = 0;
                break;  // Break as soon as a duplicate is found
            }
        }
        if (uniq == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
