#include<stdio.h>

int main(){
    int pasw=1234;
    int gs;
    int i=0;
    do
{
    if (i>0){
        printf("sry, wrong guess \n");
    }
    printf("Enter your guess: ");
    scanf("%d", &gs);
    i++;
    // body of do-while loop
    


} while (!(gs==pasw));
printf("You guessed correctly");

    return 0;
}