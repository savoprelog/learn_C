#include<stdio.h>
#include<string.h>



    
    
/*
8. Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year. 
*/
    
void dys_years(int days){
    int years;
    int weeks;
    int ds_ye;
    int ds_we;

    years=days/365;
    ds_ye=days-365*years;
    weeks=ds_ye/7;
    ds_we=ds_ye%7;

    printf("years: %d \n", years);
    printf("weeks: %d \n", weeks);
    printf("days: %d \n", ds_we);

}
    



int main(){
    dys_years(738);
  
 
    return 0;

    }