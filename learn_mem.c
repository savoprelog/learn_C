#include<stdio.h>

int main(){
    int *array;
    int n, sum = 0;

    // 1. Get the number of integers
    printf("Enter the number of integers you want to store: ");
    scanf("%d", &n);

    // 2. Dynamically allocate memory
    array = (int*)malloc(n * sizeof(int));  //allocate memory for 5 integers

    // 3. Check if memory has been allocated successfully
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
//normal program code



        // 7. Free the allocated memory
    free(array);



    return 0;
}