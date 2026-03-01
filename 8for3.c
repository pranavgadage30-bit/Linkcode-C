#include<stdio.h>

int main(){
    int choice,i,n,sum=0;

    printf("1.Print numbers from 1 to 10:\n");
    printf("2.Print numbers in reverse from 1 to 10:\n");
    printf("3.Sum of natural numbers:\n");
    printf("4.Exit\n");
    scanf("%d",&choice);

    switch (choice){

        case 1:
        printf("Numbers from 1 to 10 are \n");
        for(int i=1;i<=10;i++){
            printf("%d\n",i);
        }
        break;

        case 2:
        printf("Numbers in reverese from 10 to 1 \n");
        for(int i=10;i>=1;i--){
            printf("%d\n",i);
        }
        break;

        case 3:
        printf("Sum of natural numbers:");
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
            sum+=i;
        }
        printf("Sum of first %d natural numbers is=%d",n,sum);
        break;

        case 4:
        printf("Thank you");
        break;

        default:
        printf("Invalid choice");
    }
}