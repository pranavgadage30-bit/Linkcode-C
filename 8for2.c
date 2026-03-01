#include<stdio.h>

int main(){
    int start,end;
    printf("Enter start no:");
    scanf("%d",&start);
    printf("Enter end no:");
    scanf("%d",&end);

    for(int i=start;i<=end;i++)
    {
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}