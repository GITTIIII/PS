#include<stdio.h>

int main(){
    int n,x,y;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (y=n-x;y>=0;y--){
            if (y==0 || y==n-x || x==1 ){
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