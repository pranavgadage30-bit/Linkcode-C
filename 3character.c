#include<stdio.h>

//A is capital
//a is small
//1 is number
//* its other character

//ASCII value
//A=65 , a=97 , B=65 , b=98 , C=67 , c=99 , Z=90 , z=122

int main(){

    char ch;

    printf("Enter a Character:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=96){
        printf("The character is capital");
    }
    else if(ch>=97 && ch<=122){
        printf("The character is small");
    }
    else if(ch<=64){
        printf("The character is number");
    }
    else{
        printf("The character is other");
    }

}