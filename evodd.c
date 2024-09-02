#include<stdio.h>
//22. Write a C program that reads 5 numbers and sums all odd values between them. 
int main(){
    int n, i;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);
    int inputs[n];
    int lih[n];
    int sod[n];

    int sum=0;


    for (i = 0; i < n; i++) {
        printf("Enter input %d: ", i + 1);
        scanf("%d", &inputs[i]);
    }

    for (i = 0; i < n; i++){
       lih[i] = 0;
       sod[i]=0;
        if (!(inputs[i]%2==0)){
            lih[i]=inputs[i];
        }else{
            sod[i]=inputs[i];
        }
    }

    //printf("liha: \n");
    for (i = 0; i < n; i++) {
            
            sum+=lih[i];
       
    }
    printf("sum: %d", sum);

    

        
        
    



    

    return 0;
}