#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row\n");
    scanf("%d",&n);

    //ส่วนบน
    for (x=1;x<n/2+1;x++){
        for (z=1;z<=n-x;z++){
            printf(" ");
        }
        for (y=1;y<=2*x-1;y++){
            printf("*");
        }
        printf("\n");
    }

    //ส่วนล่าง
    for (x=n/2+1;x<=n;x++){
        for (z=1;z<x;z++){
            printf(" ");
        }
        for (y=2*n-1;y>=2*x-1;y--){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}