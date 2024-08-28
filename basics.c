#include<stdio.h>
#include<string.h>



    
    
    
    
//5 Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches


/*

void perimeter_area(double height, double width){  //void ne vrne nic, nemres napraviti return nekaj
    double perimeter;
    double area;
    perimeter=2*height+2*width;
    area=width*height;
    printf("area is: %f\n", area);
    printf("\n");
    printf("perimeter is: %f\n", perimeter);

}
*/
//Write a C program to compute the perimeter and area of a circle with a given radiu
void perimeter_area(double rad){  //void ne vrne nic, nemres napraviti return nekaj
    double perimeter;
    double area;
    double pi=3.14;
    perimeter=2*rad*pi;
    area=pi*rad*rad;
    printf("area is: %f\n", area);
    printf("\n");
    printf("perimeter is: %f\n", perimeter);

}

int main(){
    perimeter_area(2);
 
    return 0;

    }