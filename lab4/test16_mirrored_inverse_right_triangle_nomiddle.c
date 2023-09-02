#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (z=1;z<=x;z++){
            printf(" ");
        }
        for (y=n-x;y>=0;y--){
            if (y==n-x || y==0 || x==1 || x==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return(0);
}