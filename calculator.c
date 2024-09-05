#include<stdio.h>
#include<string.h>
#include <math.h>
#include <complex.h>
#include <stdlib.h>

int powers(int n, int k){
    int arr[k], i;
    
    int j=0;
    arr[0]=n;
    for(i=1; i<k;i++){
        arr[i]=n*arr[j];
        j++;   
    }
    //printf("%d ", arr[k-1]);
    return arr[k-1];

   // for (i=0; i<7;i++){
     //   printf("element %d: %d\n", i+1, arr[i]);
//}
}


//find maximum number and its index
float max(int n){
    float inputs[n];
    int i;
    int ind;
    
    
    
    for (i = 0; i < n; i++) {
        printf("Enter input %d: ", i + 1);
        scanf("%f", &inputs[i]);
    }
    float res = inputs[0];
    for (i = 0; i < n; i++){
        if (res < inputs[i]){
            res=inputs[i];
        }
        if (i==n-1){
            ind=i; //index of the highest value element


        }
        
    }
    return res, ind;

}

void pmatrix(){
    int n;
    int j;
    printf("enter n: ");
    scanf("%d", &n);
    int arr[n][3];
    int i; 

    for (i=0; i<n; i++){
        for (j=0; j<3; j++){
            int num;
            printf("enter number: ");
            scanf("%d", &num);
            arr[i][j]=num;
        }
    }
    for(i=0; i<n; i++){
        printf("%d %d %d \n", arr[i][0], arr[i][1], arr[i][2]);
    }
}

void series(int n){
    float suma=1;

    int i=2;
    while(i<=n){
        suma=suma+1.00/i;
        i++;
    }
    
    printf("%.3f", suma);

}

int sum(int n){
    int s=0, i;
    for (i=1; i<=n; i++){
        s+=powers(i, 4);
    }
    return s;
}




void alldiv(int n) {
    int c = n;
    int b = c;
    int i = 0;
    int k;
    int count = 0;

    // Count the number of divisors
    while (n > 0) {
        if (c % n == 0) {
            count++;
        }
        n--;
    }

    // Create an array to store the divisors
    int arr[count];

    // Find and store the divisors
    while (c > 0) {
        if (b % c == 0) {
            arr[i] = c;
            i++;
        }
        c--;
    }

    // Print the divisors
    int len = sizeof(arr) / sizeof(arr[0]);
    for (k = 0; k < len; k++) {
        printf("%d ", arr[k]);
    }
}






void gpmatrix(){
    int rows, cols;
    int i, j;
    int n;
    printf("print num of rows: \n");
    scanf("%d",&rows);
    printf("print num of columns: \n");
    scanf("%d",&cols);
    

        // Dynamically allocate memory for the 2D array

        /*
        The array is now dynamically allocated using malloc.
int** arr = (int**)malloc(rows * sizeof(int*)); allocates memory for an array of int* pointers (each pointer points to a row).


arr[i] = (int*)malloc(cols * sizeof(int)); allocates memory for each row.

After using the matrix, it's essential to free the allocated memory to avoid memory leaks. The loop for (i = 0; i < rows; i++) frees each row, and free(arr) frees the array of pointers.

The array size needs to be determined before you declare the array.
        */
    int** arr = (int**)malloc(rows * sizeof(int*));

    if (arr == NULL) {  // Error handling for first allocation
        printf("Memory allocation failed for rows.\n");
        exit(1); // Exit the program if memory allocation fails
    }




    for (i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {  // Error handling for each row allocation
            printf("Memory allocation failed for row %d.\n", i);
            
            // Free previously allocated memory before exiting
            for (int k = 0; k < i; k++) {
                free(arr[k]);
            }
            free(arr);
            
            exit(1); // Exit the program if memory allocation fails
        }
    }

    for (i=0; i<rows;i++){
        for(j=0; j<cols; j++){
            printf("enter number for arr[%d][%d]: ", i, j);
            scanf("%d",&n);
            arr[i][j]=n;  
        }
    }

    
    for (i=0; i<rows;i++){
        for(j=0; j<cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

        // Free the dynamically allocated memory
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);



}




//23. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid. 

   /*
       if (!chcktrng(3,4,5)){
        printf("not possible");
    }
    else{
        printf("possible");
    }
   */ 

int chcktrng(float a, float b, float c){
    if ((a+b)>c || (a+c)>b || (b+c) > a){
        return 1;
    }
    else{
        return 0;
    }
    
}







    //printf("sum is: %0.2f", sum); double cord1[], double cord2[]

//15. Write a C program to calculate the distance between two points
void dist(double cord1[], double cord2[], int len1, int len2){
    double distance;
    double x, y;
    x=cord2[0]-cord1[0];
    y=cord2[1]-cord1[1];
    distance=sqrt(x*x+y*y);

    printf("distance: %0.2f", distance);
    

}
    /*
    
    double cord1[] = {1,1};
    double cord2[] = {2,8}; //to vse more biti v main
    int len1 = sizeof(cord1) / sizeof(cord1[0]);
    int len2 = sizeof(cord2) / sizeof(cord2[0]);
    dist(cord1, cord2, len1, len2);
    */

void quadratic(double a, double b, double c){
    double discriminant, x1, x2, realPart, imagPart;

    discriminant=b*b-4*a*c;

    if (!((discriminant)<0)){
        x1=(-b+sqrt(discriminant))/(2*a);
        x2=(-b-sqrt(discriminant))/(2*a);
        printf("x1: %0.2f \n", x1);
        printf("x2: %0.2f \n", x2);


    }
    else{
        printf("the solution contains complex numbers \n");
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("x11 = %.2lf+%.2lfi and x2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);



    }
    
}





void squar_even(int b, int n){ //squares of even numbers from b to n
    int i=b;
    while (i<=n){
        if(i%2==0){
            printf("%d \n",i*i);
        }
        i++;
    }
}


// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3
void div_rem(int a, int b, int c, int d){ //print all numbers from a to b, which are divisible by c such that the remainder is d
    int i=a;
    int k=0;

    
    if (!(a<b && a>c && c>d)){
        printf("b must be greater than a which must be greater than c which must be greater than d");
    }
    else{
        while(i<=b){
            if (i%c==d){
                printf("%d \n", i);
                k++;
            }
            i++;
            
        }

    }
    printf("The rules from %d to %d obeys %d numbers.", a, b, k);

}


    float ser(int n){
        float i, sum=0;
        for(i=1; i<=n; i++){
            sum+=1.0/i;
        }

        return sum;
    }






int main(){
    alldiv(34);
    
     
    






    


    return 0;
}