#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, i;

    printf("Enter size: ");
    scanf("%d", &size);

    // Allocate memory
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory can't be allocated!\n");
        return 1;  // Exit the program with an error code
    }

    // Initialize the array
    for (i = 0; i < size; i++) {
        arr[i] = i;
    }

    // Print initial array
    for (i = 0; i < size; i++) {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n");

    // Resize the array
    arr = realloc(arr, (size + 3) * sizeof(int));
    if (arr == NULL) {
        printf("Memory can't be reallocated!\n");
        return 1;
    }

    // Initialize the new elements
    for (i = size; i < size + 3; i++) {
        arr[i] = 1 - i;  // Initialize newly allocated elements
    }

    // Print resized array
    for (i = 0; i < size + 3; i++) {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n");

    // Free the memory
    free(arr);

    return 0;
}
