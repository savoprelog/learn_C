#include<stdio.h>

//pretvornik, ko je k isti!!!


int main(){
    int i;
    int n;
    int to_conv;
    //tu mores definirati vse spremenljivke - vse enote! - odvisno kelko jih mas, aja pa n jih mas

    printf("Enter amount which you will convert to something else: \n");
    scanf("%d",&to_conv);


    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n]; //mogove ctrbej to rpcmp popraviti - to more biti enake n-je
    int coef[] = {1, 10, 100, 1000}; //tu glavno not das vse pretvornike, recimo, ci ides iz kg v dag, mg, g, ..., 10, 100, 1000, ...
    // Initialize all elements to 0
    
    int len = sizeof(coef) / sizeof(coef[0]);
 
 //to je pa algoritem - to je pa odvisno ka delas
        for (i=len-1; i>=0; i--){ //to bi 
        arr[i]=to_conv/coef[i]; //tu je zaj deljeno, ampak lejko je kera koli operacija
        to_conv=to_conv%coef[i];
   

   }
    
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }

/* tepa se na konce mores tiste zacetne spremenjlivke enaciti z elementi znottraj arr

   ho=mons[2];
   min=mons[1];
   ses=mons[0];

   printf("hours: %d\n", ho);
   printf("minutes: %d\n", min);
   printf("seconds: %d\n", ses);
   */

    return 0;
}