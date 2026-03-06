#include<stdio.h>

int main(){

    int i,j,k;
    int cnt;

    cnt=1;
    i=0;
    j=1;
    while(cnt<=10){
        k=i+j;
        printf("%d ",i);
        i=j;
        j=k;

        cnt++;
    }
}