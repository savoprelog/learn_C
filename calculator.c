#include<stdio.h>
#include<string.h>
#include <math.h>






    //printf("sum is: %0.2f", sum); double cord1[], double cord2[]

//15. Write a C program to calculate the distance between two points
void dist(double cord1[], double cord2[], int len1, int len2){
    double distance;
    double x, y;
    x=cord2[0]-cord1[0];
    y=cord2[1]-cord1[1];
    distance=sqrt(x*x+y*y);

    printf("distance: %0.2f", distance);
    

}


int main(){
    double cord1[] = {1,1};
    double cord2[] = {2,8};
    int len1 = sizeof(cord1) / sizeof(cord1[0]);
    int len2 = sizeof(cord2) / sizeof(cord2[0]);
    dist(cord1, cord2, len1, len2);

    


    return 0;
}