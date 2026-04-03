#include<stdio.h>

int main(){
    
    int hotel[3][3] = {0};   // All rooms initially empty (0)
    int f, r;
    
    printf("Enter the floor (0-2): ");
    scanf("%d", &f);
    
    printf("Enter the room (0-2): ");
    scanf("%d", &r);
    
    // Check valid range
    if(f < 0 || f > 2 || r < 0 || r > 2){
        printf("Enter valid floor and room number\n");
    }
    else if(hotel[f][r] == 0){   // Use == for comparison
        hotel[f][r] = 1;         // Book the room
        printf("Room Booked Successfully\n");
    }
    else{
        printf("Room is already booked\n");
    }

    return 0;
}
