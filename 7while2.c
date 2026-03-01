#include<stdio.h>

int main(){
    int i=1,sum1=0,sum2=0;
    while(i<=100)
    {

    if(i%5==0){
        sum1+=i;
    }
    if(i%7==0){
        sum2+=i;
        
    }
    i++;
}
    printf("sum1=%d\nsum2=%d",sum1,sum2);   
    

}