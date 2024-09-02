#include<stdio.h>
#include <stdlib.h>
int main(){
    /*
        int rows, i, j, n, num;
    
    printf("enter n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        printf("%d %d %d", i, i*i, i*i*i);
        printf("\n");
    }
    
    
    
    */
   int r, c, j, i, k=1;
   printf("enter p, num of rows: ");
   scanf("%d", &r);
   printf("enter p, num of cols: ");
   scanf("%d", &c);
   int n=r*c;
   for (i=0; i<r; i++){
    for (j=0; j<c; j++){
        printf("%d ", k);
        k++;

    }
    printf("\n");
   }
   




    return 0;
}