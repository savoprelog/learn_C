#include<stdio.h>
#include<stdlib.h>
    /*
    
    
   

    int *arr;
    int size=10;
    int k;

    arr=(int *)malloc(size * sizeof(int)); //maloc accepts the amount of bytes=how many elements times the size of the data type , it returns a pointer which is going to point to our space - this is known as dynamically allocated array
        if (arr == NULL) { //you have to use %arr to access the value(memory address) of arr - to access the value that memmory address hold - type %*p 
        printf("Memory allocation failed!\n"); //heap can become full
        return 1;
    }
    for (k=0; k<size; k++){
        printf("10 - %d = %d\n", k, 10-k);
    }

    arr=realloc(arr, sizeof(int)*(size+5)); //realloc works with already preallocated memmory space, increase the size by 5
    printf("\n newly allocated memmory! \n");

    for (k=0; k<(size+5); k++){
        printf("15 - %d = %d\n", k, size+5-k);
    }


    free(arr); //if you forget to do this it is called a memory leak

    //if you want to zero all elements of array

     //it makes it available, it doesnt clear the data which has been assigned there

     //calloc sets everything to 0 - calloc(10, sizeof(int)) 10 elements, you can put any number of elements in there
  

    


 */
int *insert(int arr[], int size, int val, int ind){
        if (ind < 0 || ind > size) {
            printf("Invalid index!\n");
            return NULL;
        }
        int i;
        
        arr=(int *)realloc(arr, (size+1)*sizeof(int));
        if (arr == NULL) {
            printf("Memory can't be allocated!\n");
            return NULL;  // Exit the program with an error code
        }

        for (i=size; i>ind; i--){
            
            arr[i]=arr[i-1];
        }
        
        
        arr[ind]=val;
    
        return arr;
    }

int *rem(int arr[], int size, int ind){
    if (ind < 0 || ind > size) {
        printf("Invalid index!\n");
        return NULL;
        }
    int i;


    for (i=ind; i<size; i++){
        
            
        arr[i]=arr[i+1];
    }
    arr=(int *)realloc(arr, (size-1)*sizeof(int));
    if (arr == NULL) {
        printf("Memory can't be allocated!\n");
        return NULL;  // Exit the program with an error code
    }

    return arr;

}



    




int main(){

    int *arr;
    int size, i;
    printf("enter size: ");
    scanf("%d", &size);
    arr=(int *)malloc(size * sizeof(int));
    if (arr==NULL){
        printf("memory cant be allocated");
        return 1;
        
    }
    //now you have to initialize an array - otherwise it will be filled with random values
    for (i=0; i<size; i++){
        arr[i]=i;
    }
    printf("array: \n");
    for (i=0; i<size; i++){
        printf("%d ", arr[i]);    
       
    }
    printf("\n");
    printf("array2: \n");

    int pos=2;



    arr=insert(arr,size, 34, pos);
    for (i=0; i<size+1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n zaj pa remove \n");
    arr=rem(arr, size, pos);
    for (i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    



    free(arr);





    return 0;
}

