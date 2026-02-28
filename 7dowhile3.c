#include<stdio.h>

int main(){
    int a=1, sum=0,sub=2;
    do{
        if(a%2==0)
        {
            sum+=a;
            if(a!=2)
            {
                sub-=a;
            }

        }
        a++;
    }
    while(a<=100);
    printf("Sum:%d\nSub:%d",sum,sub);
}