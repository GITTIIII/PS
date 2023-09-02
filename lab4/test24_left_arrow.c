#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of columns ");
    scanf("%d",&n);

    //บน
    for (x=1;x<n;x++){
        for (z=n-x;z>0;z--){
            printf(" ");
        }
        for(y=n-x;y>=0;y--){
            printf("*");
        }
        printf("\n");
    }

    //ล่าง
    for (x=1;x<=n;x++){
        for (z=1;z<x;z++){
            printf(" ");
        }
        for (y=1;y<=x;y++){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}