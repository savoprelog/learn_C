#include<stdio.h>

float max(int n){
    float inputs[n];
    int i;
    
    for (i = 0; i < n; i++) {
        printf("Enter input %d: ", i);
        scanf("%f", &inputs[i]);
    }
    float res = inputs[0];
    for (i = 0; i < n; i++){
        if (res < inputs[i]){
            res=inputs[i];
        }
        
    }
    return res;

}
int main(){
    //find maximum number 
    float wa=max(4);
    printf("wa: %f", wa);

    return 0;
}