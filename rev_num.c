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

int main(){
    int n;

    printf("enter a number: ");
    scanf("%d", &n);
    int c=n;
    int count=0;
  
    while (n){
        if (n<10){
            count++;
            break;
        }
        n=n/10;
        count++;
    }
    int num=0;
    count=count-1;
    
    while (c){
         if (c<10){
            num+=c;
            break;
          
        } 
                
        num+=c%10*powers(10, count);
        c=c/10;
        count--;
    }
    printf("%d", num);
    


    

    return 0;
}

/* gemini:
#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
*/