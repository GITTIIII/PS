#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (z=1;z<=x;z++){
            printf(" ");
        }
        for(y=1;y<=n;y++){
            if (y==1 || y==n || x==1 || x==n){
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