#include<stdio.h>

int main(){

    int rollno;
    char name[10];
    int sub1,sub2,sub3,total;
    float percent;

    printf("Enter student roll number:");
    scanf("%d",&rollno);

    printf("Enter student name:");
    scanf("%s",&name);

    printf("Enter marks for three subjects:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    //Calculation

    total=sub1+sub2+sub3;
    percent=total/3;

    //display marksheet

    printf("\n\t----------------STUDENT MARKSHEET------------------");
    printf("\n\t\tRoll Number\t:%d",rollno);
    printf("\n\t\tName\t\t:%s",name);
    printf("\n\t\tMaths\t\t:%d",sub1);
    printf("\n\t\tScience\t\t:%d",sub2);
    printf("\n\t\tEnglish\t\t:%d",sub3);
    printf("\n\t------------------CALCULATION-----------------------");
    printf("\n\t\tTotal\t\t:%d",total);
    printf("\n\t\tPercentage\t:%f",percent);
    printf("\n\t--------------------THANK YOU----------------------");
}