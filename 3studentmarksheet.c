#include<stdio.h>

int main(){

    int sub1,sub2,sub3,sub4,sub5,totalmarks;
    float percent;
    char name[50],clgname[50];
    

    printf("Enter the name of the student:");
    scanf("%s",&name);

    printf("Enter the college name:");
    scanf("%s",&clgname);

    printf("Enter the marks of the student:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    totalmarks=sub1+sub2+sub3+sub4+sub5;
    percent=(totalmarks/5.0);

    printf("\nStudent name:%s",name);
    printf("\nCollege name:%s",clgname);
    printf("\nTotal marks:%d",totalmarks);
    printf("\nPercentage is:%f",percent);

    if (percent>=90){
        printf("\nGrade is A");

    }
    else if(percent>=80){
        printf("\nGrade is B");
    }
    else if(percent>=70){
        printf("\nGrade is C");
    }
    else if(percent>=60){
        printf("\nGrade is D");
    }
    else if(percent>=40){
        printf("\nGrade is E");
    }
    else{
        printf("\nFail");
    }

    

    
}