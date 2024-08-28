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
        char temp[2] = {word[i], '\0'}; //- do this by creating a new character array with a size of 2 (one for the character and one for the null terminator) and copying word[i] into it
        strcat(rev, temp); // -> expects a pointer to a string, char is a single character not a string - you are accessing char word[i]
        
    }

    printf("%s\n", rev);
    

    return 0;

    }
