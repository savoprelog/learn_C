#include<stdio.h>
#include<string.h>



    
    
    
    
    
//4. Write a C program to print the following characters in reverse. 
//reve4rse the inputted string
int main(){
    char word[20];
    char rev[20];



    printf("Enter your word: ");
    scanf("%s", word);

    int ls = strlen(word);
    int i;
    

    for (i=ls; i>=0; i--){
        //strcat(rev, word[i]);đ
        char temp[2] = {word[i], '\0'};
        strcat(rev, temp);
        
    }

    printf("%s\n", rev);
    

    return 0;

    }
