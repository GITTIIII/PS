#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of columns\n");
    scanf("%d",&n);

    //บน
    for (x=1;x<=n;x++){
        for (z=1;z<x;z++){
            printf(" ");
        }
        for (y=n;y>=x;y--){
            printf("*");
        }
        printf("\n");
    }
    //ล่าง
    for (x=1;x<n;x++){
        for (z=1;z<n-x;z++){
            printf(" ");
        }
        for (y=1;y<=x+1;y++){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}