#include<stdio.h>

int main(){

    int arr[10];
    int ch,n=0,i,j,k,ct,search;
    int flag=0;
    int temp;

    do{
        printf("\n1.Create array");
        printf("\n2.Display Array");
        printf("\n3.Search element");
        printf("\n4.Sort array");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){

            case 1: // Create
                printf("\nHow many elements (max 10): ");
                scanf("%d",&n);

                printf("\nEnter %d elements:\n",n);
                for(i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                }
                break;

            case 2: // Display
                if(n==0){
                    printf("\nArray is empty. Please create array first.");
                } else {
                    printf("\nElements in array are:\n");
                    for(i=0;i<n;i++){
                        printf("%5d",arr[i]);
                    }
                }
                break;

            case 3: // Search
                if(n==0){
                    printf("\nArray is empty. Please create array first.");
                } else {
                    flag=0;
                    printf("\nEnter element to search: ");
                    scanf("%d",&search);

                    for(i=0;i<n;i++){
                        if(arr[i]==search){
                            flag=1;
                            break;
                        }
                    }

                    if(flag)
                        printf("\nElement found at position %d", i+1);
                    else
                        printf("\nElement not found");
                }
                break;

            case 4: // Sort
                if(n==0){
                    printf("\nArray is empty. Please create array first.");
                } else {
                    for(i=0;i<n-1;i++){
                        for(j=i+1;j<n;j++){
                            if(arr[i] > arr[j]){
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                            }
                        }
                    }

                    printf("\nArray after sorting:\n");
                    for(k=0;k<n;k++){
                        printf("%5d",arr[k]);
                    }
                }
                break;

            default:
                printf("\nInvalid choice!");
        }

        printf("\n\nDo you want to continue? Press 1: ");
        scanf("%d",&ct);

    }while(ct==1);

    return 0;
}
