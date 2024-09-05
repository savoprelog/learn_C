

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }

    int sqrt_num = sqrt(num);
    for (int i = 2; i <= sqrt_num; i++) {
        if (num % i == 0) {
            return 0; // Divisible by i, not prime
        }
    }

    return 1; // Not divisible by any number from 2 to sqrt(num), prime
}

int main() {
    int number;
    int *arr;
    int size = 200;

    arr = (int *)malloc(size * sizeof(int));  //to se morn nafčiti
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }

    // Generate prime numbers using the is_prime function
    for (int i = 2; i < size; i++) {
        if (is_prime(i)) {
            arr[i] = i;
        }
    }

    // Print the prime numbers
    printf("Prime numbers within the first 200 numbers:\n");
    for (int i = 2; i < size; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }

    // Deallocate memory
    free(arr); //ti se morn nafčiti

    return 0;
}