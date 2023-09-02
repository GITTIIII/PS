#include<stdio.h>

int main(){
    int n,x,y;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (y=1;y<=x;y++){
            printf("*");
        }
        printf("\n");
    }
    for (x=n-1;x>0;x--){    
        for (y=x;y>0;y--){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}