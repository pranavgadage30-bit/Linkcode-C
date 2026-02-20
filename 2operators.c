#include<stdio.h>

//ARITHMETIC OPERATORS
//+,-,*,%

//RELATIONAL OPERATORS
//<,>,<=,>=

//LOGICAL OPERATORS
// && logical and
// || logical or
// !  logical not

int main(){

    int num1,num2,num3;

    printf("\nEnter any three numbers:");             
    scanf("%d%d%d",&num1,&num2,&num3);                
                                                      
    if((num1>num2)&&(num1>num3)){                     
        printf("\ngreater number is :%d",num1);
    }
    else if((num2>num3)&&(num2>num3)){
        printf("\ngreater number is :%d",num2);
    }
    else if((num3>num1)&&(num3>num1)){
        printf("\ngreater number is :%d",num3);
    }
    else{
        printf("\nAll numbers are equal");

    }
}




