#include<stdio.h>

int main(){

    int marks;

    printf("Enter the marks:");
    scanf("%d",&marks);

    if(marks>=85){
        printf("Grade is :A");
    }
    else if(marks>=75){
        printf("Grade is :B");
    }
    else if(marks>=65){
        printf("Grade is :C");
    }
    else if(marks>=45){
        printf("Grade is :D");
    }
    else{
        printf("FAIL");
    }
    
}