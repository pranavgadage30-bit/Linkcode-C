#include<stdio.h>

int main(){
    int a=1;
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    do{
        printf("%d x %d = %d\n",num,a,num*a);
        a++;
    }
    while(a<=10);
}