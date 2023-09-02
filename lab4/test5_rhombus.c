#include<stdio.h>

int main(){
    int n,x,y,z;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (z=n-x;z>0;z--){
            printf(" ");
        }
        for (y=1;y<=n;y++){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}