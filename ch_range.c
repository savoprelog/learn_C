#include<stdio.h>
#include<math.h>
  //21. Write a C program that reads an integer and checks the specified range to which it belongs

int main(){
  
    int n;
    int low;
    int high;



    printf("enter an integer: ");
    scanf("%d", &n);
    if (!(n<0)){
        low=n-n%10;
        high=low+10;
        printf("The range of your number is: [%d, %d]", low, high);

    }
    else{
        printf("enter a positive integer");
    }





    


    return 0;
}