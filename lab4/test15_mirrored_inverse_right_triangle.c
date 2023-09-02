#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (z=1;z<=x;z++){
            printf(" ");
        }
        for (y=x;y<=n;y++){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}