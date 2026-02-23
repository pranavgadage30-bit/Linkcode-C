#include<stdio.h>

int main(){

    int ip,a,b,choice;
    menu:
    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n");
    scanf("%d",&ip);
    switch(ip)
    {
        case 1:{
            printf("\nEnter any two numbers:");
            scanf("%d%d",&a,&b);
            printf("\nAddition of two numbers is %d",a+b);
            break;
        }

        case 2:{
            printf("\nEnter any two numbers:");
            scanf("%d%d",&a,&b);
            printf("\nSubtraction of two numbers is %d",a-b);
            break;
        }

        case 3:{
            printf("\nEnter any two numbers:");
            scanf("%d%d",&a,&b);
            if (a>0&&b>0)
            {
              printf("\nMultiplication of two numbers is %d",a*b);  
            }
            else
            {
                printf("Dont multiply");
            }
            break;
            }

        case 4:{
            printf("\nEnter any two numbers:");
            scanf("%d%d",&a,&b);
            if (b>0)
            {
              printf("\nDivision of two numbers is %d",a/b);  
            }
            else
            {
                printf("Dont divide");
            }
            break;
        }

        case 5:{
            printf("THANK YOU");
            break;
        }

        default:{
            printf("INVALID INPUT");
        }

    }
    printf("\nEnter 1/0");
    scanf("%d",&choice);
    if(choice==1){
        goto menu;
    }
    else{
        printf("Thank you");
    }
    

}