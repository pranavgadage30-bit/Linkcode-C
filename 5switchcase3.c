#include<stdio.h>

int main(){

    int choice;
    float r,b,h,a,l,w;
    printf("\n1.Area of circle");
    printf("\n2.Circumference of circle");
    printf("\n3.Area of triangle");
    printf("\n4.Area of square");
    printf("\n5.Perimeter of square");
    printf("\n6.Area of rectangle");
    printf("\n7.Perimeter of rectangle");
    printf("\n8.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:{
        printf("\nEnter radius of the circle:");
        scanf("%f",&r);
        printf("\nArea of circle is =%.2f",3.14*r*r);
        break;
        }

        case 2:{
        printf("\nEnter radius of the circle:");
        scanf("%f",&r);
        printf("\nCircumference of circle is =%.2f",2*3.14*r);
        break;

        }
        case 3:{
        printf("\nEnter height and base of triangle:");
        scanf("%f%f",&h,&b);
        printf("\nArea of Triangle is =%.2f",0.5*b*h);
        break;

        }
        case 4:{
        printf("\nEnter side of square:");
        scanf("%f",&a);
        printf("\nArea of aquare is =%.2f",a*a);
        break;

        }
        case 5:{
        printf("\nEnter side of square");
        scanf("%f",&a);
        printf("\perimeter of square is =%.2f",4*a);
        break;

        }
        case 6:{
        printf("\nEnter length and breadth of rectangle:");
        scanf("%f%f",&l,&w);
        printf("\nArea of rectangle is =%.2f",l*w);
        break;

        }
        case 7:{
        printf("\nEnter length and breadth of rectangle:");
        scanf("%f%f",&l,&w);
        printf("\nPerimeter of rectangle is =%.2f",2*(l+w));
        break;
        }

        case 8:{
        printf("\nThank you");
        break;
        }
        
        default:{
            printf("Invalid input");
        }
    }
}