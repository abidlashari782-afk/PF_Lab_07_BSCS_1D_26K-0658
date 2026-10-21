#include<stdio.h>
int main(){
    int grid[3][3];
    int haserror=0;
    int freq[10]={0};

    printf("Enter the values(0-9): ");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        scanf("%d",&grid[i][j]);
       }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            int val=grid[i][j];
            if(val<0|| val>9){
            haserror=1;
            }
            else if(val!=0)
            freq[val]++;

            if(freq[val]>1){
                haserror=1;
            }
        }
    }

    if(haserror==0){
        printf("Valid");
    }
    else{
        printf("invalid");
    }
}
