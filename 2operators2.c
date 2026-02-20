#include<stdio.h>


//CONDITIONAL OPERATORS
//result=(condition)? statement1:statement2;
//if condition is true statement 1 is result
//if condition is false statement 2 is result

//a=5,b=6,c=3
//result=(a>b)?(a>c?a:c):(b>c?b:c);


int main(){

    int x=10,y=5,z=4;

    int result;

    result=(x>y)?(x>z?x:z):(y>z?y:z);
    printf("\nGreater number is :%d",result);
}



