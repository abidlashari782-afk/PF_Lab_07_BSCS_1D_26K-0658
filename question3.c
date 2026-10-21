#include<stdio.h>
int main(){
    int sales[4][5];
    int sum_salesman[4]={0};
    int sumofproducts[5]={0};
    int salesman=4;
    int prodcuts=5;
    int maxproduct=0;
    float final_amounts[4]={0};
    for(int i=0;i<4;i++){
        
        for(int j=0;j<5;j++){
            printf("Enter the sales of Person %d product %d: ",i+1,j+1);
            scanf("%d",&sales[i][j]);
        }
    }



    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            sum_salesman[i]+=sales[i][j];
        }
    }
    for(int j=0;j<5;j++){
        for(int i=0;i<4;i++){
            sumofproducts[j]+=sales[i][j];
        }
    }
    for(int j=0;j<prodcuts;j++){
        if(sumofproducts[j]>sumofproducts[maxproduct]){
            maxproduct=j;
        }
    }

    for(int i = 0; i < 4; i++) {
        if(sum_salesman[i] > 10000) {
            final_amounts[i] = sum_salesman[i] + (sum_salesman[i] * 0.10); // 10% bonus
        } else {
            final_amounts[i] = sum_salesman[i]; // No bonus
        }
    }

    printf("\n=================== STORE SALES MANAGEMENT SUMMARY ===================\n");
    
    printf("\n[1] Total Sales per Salesman:\n");
    for(int i = 0; i < 4; i++) {
        printf("   - Salesman %d: Rs. %d\n", i + 1, sum_salesman[i]);
    }

    printf("\n[2] Total Sales per Product:\n");
    for(int j = 0; j < 5; j++) {
        printf("   - Product %d: Rs. %d\n", j + 1, sumofproducts[j]);
    }

    printf("\n[3] Most Expensive (Best-Selling) Product:\n");
    printf("   - Product %d generated the highest revenue with Rs. %d.\n", maxproduct + 1, sumofproducts[maxproduct]);

    printf("\n[4] Final Amounts After Bonus (Threshold: > Rs. 10,000):\n");
    for(int i = 0; i < 4; i++) {
        if(sum_salesman[i] > 10000) {
            printf("   - Salesman %d: Base = Rs. %d | Final = Rs. %.2f [10%% Bonus Applied]\n",i + 1, sum_salesman[i], final_amounts[i]);
        } else {
            printf("   - Salesman %d: Base = Rs. %d | Final = Rs. %.2f [No Bonus]\n",i + 1, sum_salesman[i], final_amounts[i]);
        }
    }
    printf("======================================================================\n");
return 0;
}