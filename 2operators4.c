#include<stdio.h>

int main(){

    int x=1,y=1;
    int a,b;

    a=x++ + x++ + x++ + x++ + x++;
    b=++y + ++y + ++y + ++y + ++y;

    printf("\na is:%d",a);
    printf("\nb is:%d",b);
    printf("\nx is:%d",x);
    printf("\ny is:%d",y);
}


//ASSIGNMENT OPERATORS
//=

//x=5
//x+=2 | x=x+2  |x=5+2=7
//x-=2 | x=x-2
//x*=2 | x=x*2
//x/=2 | x=x/2