#include<stdio.h>


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



int sum(int n){
    int s=0, i;
    for (i=1; i<=n; i++){
        s+=powers(i, 4);
    }
    return s;
}

int main(){
    /*
    58. Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers. 
    
   int arr[4], i, n;

   for (i=0; i<4; i++){
        printf("enter number: ");
        scanf("%d", &arr[i]);
   }
   int min=arr[0];
   int max=arr[0];
   for(n=0; n<4; n++){
        if(arr[n]<min){
            min=arr[n];
        }
        if(arr[n]>max){
            max=arr[n];
    
    }
    
   }

   printf("difference: %d", max-min);

*/
/*
    enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

    // Print the values of the days using the enumeration constants
    printf("Sun = %d", Sun);
    printf("\nMon = %d", Mon);
    printf("\nTue = %d", Tue);
    printf("\nWed = %d", Wed);
    printf("\nThu = %d", Thu);
    printf("\nFri = %d", Fri);
    printf("\nSat = %d", Sat);

*/


//63. Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case, m is less than or equal to n. Print an appropriate message. 


    printf("%d", sum(99));







    return 0;
}