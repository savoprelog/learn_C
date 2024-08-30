//17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

//to je praktično ista naloga - lejko bi napravo program ka bi v splošno rešaval talšne stvari, kda je 
//pretvarjanmjke more meti isti algoritem - isti faktor

/*

#include<stdio.h>

int main(){
    int i;
    int secs;
    int ho;
    int min;
    int ses;
    int remain;
     
    printf("Enter amount of seconds: \n");
    scanf("%d",&secs);
    remain=secs;


    int vals[] = {1, 60,3600};
    int len = sizeof(vals) / sizeof(vals[0]);
 
    int mons[] = {0, 0, 0}; //

    for (i=len-1; i>=0; i--){ //to bi 
        mons[i]=remain/vals[i];
        remain=remain%vals[i];
   

   }

   ho=mons[2];
   min=mons[1];
   ses=mons[0];

   printf("hours: %d\n", ho);
   printf("minutes: %d\n", min);
   printf("seconds: %d\n", ses);
   

    



    return 0;
}
*/

//18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days. 
#include<stdio.h>




int main(){
    int i;
    int n;
    int years;
    int months;
    int days;

    int to_conv=2535; //to samo spreminjas
   




   
    int arr[3]; //mogove ctrbej to rpcmp popraviti - to more biti enake n-je
    for (int i = 0; i < 3; i++) {
        arr[i] = 0;
    }

    int coef[] = {1, 30, 365}; //
    // Initialize all elements to 0
    
    int len = sizeof(coef) / sizeof(coef[0]);
 
 //to je pa algoritem - to je pa odvisno ka delas
        for (i=len-1; i>=0; i--){ //to bi 
        arr[i]=to_conv/coef[i]; //tu je zaj deljeno, ampak lejko je kera koli operacija    - pa te algoritem spreminjas
        to_conv=to_conv%coef[i];
   

   }
    


/* tepa se na konce mores tiste zacetne spremenjlivke enaciti z elementi znottraj arr

   ho=mons[2];
   min=mons[1];
   ses=mons[0];

   printf("hours: %d\n", ho);
   printf("minutes: %d\n", min);
   printf("seconds: %d\n", ses);
   */
  years=arr[2];
  months=arr[1];
  days=arr[0];
  printf("years: %d \n", years);
  printf("months: %d \n", months);
  printf("days: %d \n", days);

    return 0;
}