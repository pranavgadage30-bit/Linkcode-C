#include<stdio.h>

int main(){
    int a=1;
    int even=0,odd=0;
    do{
        if(a%2==0)
        {
            even+=a;
        }
        else
        {
            odd+=a;
        }
        a++;
    }
    
    while(a<=120);
    printf("even sum is:%d \n odd sum is:%d \n total sum is:%d",even,odd,(even+odd));
    
}