        //print C, length 11, height 9, 


#include<stdio.h>

int main(){

    int i;
    int j;
    for (i=0; i<=8; i++){
        for (j=0; j<=10; j++){
            
            
            
            if ((i==0 || i==8) && (2<j && j<10)) {
                printf("#");
            }
            else if ((i==1 || i==7)&& (0<j && j<3 || 8<j && j <11)) {
                printf("#");

            }
                

            
            else if  ((1<i && i<7)&&(j==0)){
                printf("#");
            }
            else{
                printf(" ");
            }
            
        }

            
        printf("\n");
        }
        return 0;


}
    /*    print F

    int i;
    int j;
    for (i=0; i<=4; i++){
        for (j=0; j<=4; j++){
            printf("#");
            if (!(i==0 || i==2) && (j==0) ){
                break;
            }
            
        }

            
        printf("\n");
        }
        */

        

       