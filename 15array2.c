#include<stdio.h>

int main(){

    int arr[10];
    int i,min,max;
    int sum=0;
    float avg;


    printf("Enter 10 numbers in array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/10;

    min=arr[0];
    max=arr[0];

    for(i=1;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    else if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("\nSmallest number is:%d",min);
    printf("\nLargest number is :%d",max);
    printf("\nSum of number is:%d",sum);
    printf("\nAverage of number is :%f",avg);
}
