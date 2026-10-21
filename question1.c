#include <stdio.h>

int main() {
    int seats[10][4]={0};
    int reservation;
    printf("Management system\n");
    printf("Enter the No. of seats u want to reserve: ");
    if( scanf("%d",&reservation)!=1){
        printf("\ninvalid input.");
        return 1;
    }
    for(int i=0;i<reservation;i++){
        int row,seat;
        printf("Enter Row number(1-10): ");
        scanf("%d",&row);
        printf("Enter seat number(1-4): ");
        scanf("%d",&seat);

        if (row < 1 || row > 10 || seat < 1 || seat > 4) {
                printf("Invalid input! Row must be between 1-10 and seat between 1-4. Try again.\n");
                continue;
            }

        int rowindex=row-1;
        int seatindex=seat-1;

        if(seats[rowindex][seatindex]==0){
            seats[rowindex][seatindex]=1;
        }
        else {
            printf("\nseat already booked");
        }
    }
    printf("\n----------------------------------------\n");
    printf("           FINAL SEATING MAP            \n");
    printf("----------------------------------------\n");

    for(int i=0;i<10;i++){
        printf("Row %2d\t",i+1);
        for(int j=0;j<4;j++){
            printf("%5d",seats[i][j]);
        }
        printf("\n");
    }

    int count=0;
    for(int i=0;i<10;i++){
        int isfullyBooked=1;
        for(int j=0;j<4;j++){
            if(seats[i][j]==0){
                isfullyBooked=0;
            }
        }
        if(isfullyBooked){
            count++;
        }
    }
    printf("\n %d Rows are full ",count);
    
    
    return 0;
}