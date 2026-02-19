#include<stdio.h>

int main(){

    int productid;
    char productname[10];
    int productprice,productqty,total;
    float cgst,sgst,finaltotal;

    printf("Enter Product Id:");
    scanf("%d",&productid);

    printf("Enter Product name:");
    scanf("%s",&productname);

    printf("Enter product Price:");
    scanf("%d",&productprice);

    printf("Enter product quantity:");
    scanf("%d",&productqty);

    total=productqty*productprice;
    cgst=total*0.6;
    sgst=total*0.6;
    finaltotal=total+cgst+sgst;

    printf("\n\t---------------PRODUCT BILL----------------");
    printf("\n\t\tProduct ID\t\t:%d",productid);
    printf("\n\t\tProduct Name\t\t:%s",productname);
    printf("\n\t\tProduct Price\t\t:%d",productprice);
    printf("\n\t\tProduct Quantity\t:%d",productqty);
    printf("\n\t-------------------------------------------");
    printf("\n\t\tTOTAL\t\t:%d",total);
    printf("\n\t\tCGST\t\t:%f",cgst);
    printf("\n\t\tSGST\t\t:%f",sgst);
    printf("\n\t\tFinal amount to be paid\t:%f",finaltotal);
    printf("\n\t---------------THANK YOU-------------------");


    


}