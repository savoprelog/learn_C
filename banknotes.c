/*
16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/




#include<stdio.h>
#include <time.h> //lets start measuring efficiency


int main(){
    clock_t start, end;
     double cpu_time_used;

    int mon;
    int remain;
    int hundred;
    int fifty;
    int twenty;
    int ten;
    int five;
    int two;
    int one;

    int i;
    int vals[] = {1, 2,5, 10, 20, 50, 100};
    int len = sizeof(vals) / sizeof(vals[0]);
    int mons[] = {0, 0, 0, 0, 0, 0, 0}; //


    printf("Type a number: \n");
    start = clock();
    /*
    

// Get and save the number the user types
//to zaj probajmo polepšsati
    scanf("%d", &mon);
    hundred=mon/100;
    remain=mon%100;
    fifty=remain/50;
    remain=remain%50;
    twenty=remain/20;
    remain=remain%20;
    ten=remain/10;
    remain=remain%10;
    five=remain/5;
    remain=remain%5;
    two=remain/2;
    remain=remain%2;
    one=remain/1;






    */ 
   //let's try an array and a for loop

   

   scanf("%d", &mon);
   

   remain=mon;

   for (i=len-1; i>=0; i--){
        mons[i]=remain/vals[i];
        remain=remain%vals[i];

   }
    hundred=mons[6];
    fifty=mons[5];
    twenty=mons[4];
    ten=mons[3];
    five=mons[2];
    two=mons[1];
    one=mons[0];
   
    
    printf("hundred %d \n", hundred);
    printf("fifty %d \n", fifty);
    printf("twenty %d \n", twenty);
    printf("ten %d \n", ten);
    printf("five %d \n", five);
    printf("two %d \n", two);
    printf("one %d \n", one);

    end = clock();
    printf("program took %f seconds to execute \n", cpu_time_used); 
    
    



    return 0;
}