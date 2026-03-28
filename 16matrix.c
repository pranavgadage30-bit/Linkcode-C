#include <stdio.h>

int main(){

    int i, j,ct, l1, l2;
    int set1[100], set2[100], setunion[200], setinter[100];
    int ch;
    int k = 0, m = 0;
    int flag;

    
    // Input size and elements of set1
    printf("Enter number of elements in set1: ");
    scanf("%d", &l1);

    printf("Enter %d elements in set1:\n", l1);
    for(i = 0; i < l1; i++){
        scanf("%d", &set1[i]);
    }

    // Input size and elements of set2
    printf("Enter number of elements in set2: ");
    scanf("%d", &l2);

    printf("Enter %d elements in set2:\n", l2);
    for(i = 0; i < l2; i++){
        scanf("%d", &set2[i]);
    }

    printf("\n1. Union");
    printf("\n2. Intersection");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch){

        case 1:   // UNION

            for(i = 0; i < l1; i++){
                setunion[k++] = set1[i];
            }

            for(j = 0; j < l2; j++){
                flag = 1;
                for(i = 0; i < l1; i++){
                    if(set2[j] == set1[i]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1){
                    setunion[k] = set2[j];
                    k++;
                }
            }

            printf("\n--------- UNION ---------\n");
            for(i = 0; i < k; i++){
                printf("%5d", setunion[i]);
            }
            break;


        case 2:   // INTERSECTION

            for(i = 0; i < l1; i++){
                for(j = 0; j < l2; j++){
                    if(set1[i] == set2[j]){
                        setinter[m] = set1[i];
                        m++;
                        break;
                    }
                }
            }

            printf("\n------ INTERSECTION ------\n");
            for(i = 0; i < m; i++){
                printf("%5d", setinter[i]);
            }
            break;

        default:
            printf("\nInvalid Choice");
    }

    printf("\n\nDo you want to continue? Press 1: ");
    scanf("%d",&ct);
    


return 0;
}
