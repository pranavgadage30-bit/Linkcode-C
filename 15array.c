#include<stdio.h>

int main(){

    int arr[10];
    int ch, n = 0, i, j, k, ct, search;
    int flag;
    int temp;
    int newvalue, loc;

    do{
        printf("\n===== MENU =====");
        printf("\n1. Create Array");
        printf("\n2. Display Array");
        printf("\n3. Search Element");
        printf("\n4. Sort Array");
        printf("\n5. Insert New Value");
        printf("\n6. Delete Value");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){

            case 1:   // Create
                printf("\nHow many elements (max 10): ");
                scanf("%d",&n);

                if(n <= 0 || n > 10){
                    printf("\nInvalid size! Maximum size allowed is 10.");
                    n = 0;
                }
                else{
                    printf("\nEnter %d elements:\n", n);
                    for(i=0;i<n;i++){
                        scanf("%d",&arr[i]);
                    }
                }
                break;

            case 2:   // Display
                if(n == 0){
                    printf("\nArray is empty. Please create array first.");
                }
                else{
                    printf("\nElements in array are:\n");
                    for(i=0;i<n;i++){
                        printf("%5d", arr[i]);
                    }
                }
                break;

            case 3:   // Search
                if(n == 0){
                    printf("\nArray is empty. Please create array first.");
                }
                else{
                    flag = 0;
                    printf("\nEnter element to search: ");
                    scanf("%d",&search);

                    for(i=0;i<n;i++){
                        if(arr[i] == search){
                            flag = 1;
                            break;
                        }
                    }

                    if(flag == 1)
                        printf("\nElement found at position %d", i+1);
                    else
                        printf("\nElement not found");
                }
                break;

            case 4:   // Sort
                if(n == 0){
                    printf("\nArray is empty. Please create array first.");
                }
                else{
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
                        printf("%5d", arr[k]);
                    }
                }
                break;

            case 5:   // Insert
                if(n == 10){
                    printf("\nArray is full! Cannot insert.");
                }
                else{
                    printf("\nEnter new value and location to insert: ");
                    scanf("%d%d",&newvalue,&loc);

                    if(loc < 1 || loc > n+1){
                        printf("\nInvalid location!");
                    }
                    else{
                        for(i=n-1;i>=loc-1;i--){
                            arr[i+1] = arr[i];
                        }
                        arr[loc-1] = newvalue;
                        n++;
                        printf("\n%d inserted at location %d", newvalue, loc);
                    }
                }
                break;

            case 6:   // Delete
                if(n == 0){
                    printf("\nArray is empty. Cannot delete.");
                }
                else{
                    printf("\nEnter location to delete: ");
                    scanf("%d",&loc);

                    if(loc < 1 || loc > n){
                        printf("\nInvalid location!");
                    }
                    else{
                        temp = arr[loc-1];
                        for(i=loc-1;i<n-1;i++){
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf("\n%d deleted from location %d", temp, loc);
                    }
                }
                break;

            default:
                printf("\nInvalid choice!");
        }

        printf("\n\nDo you want to continue? Press 1: ");
        scanf("%d",&ct);

    }while(ct == 1);

    return 0;
}
