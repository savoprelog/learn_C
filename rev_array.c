#include<stdio.h>
int main(){
    int len, i;
    printf("Enter size of an array: ");
    scanf("%d", &len);
    int arr[len];
    int j=len-1;
    for (i=0;i<len;i++){
        printf("enter n: ");
        scanf("%d", &arr[i]);
    }
    for (i=0;i<len;i++){
        
        printf("%d ", arr[i]);
        
    }
    printf("\n");
    for (i=0;i<len/2;i++){  
        int n=arr[i];
        arr[i]=arr[j];
        arr[j]=n;
        j--;
    }
    for (i=0;i<len;i++){
        
        printf("%d ", arr[i]);
        
    }

    return 0;
}