#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for(z=1;z<=x;z++){
            printf(" ");
        }
        for (y=2*n+1;y>=2*x+1;y--){
            if (y==2*n+1|| y==2*x+1 ||x==1){
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