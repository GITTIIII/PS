#include<stdio.h>

int main(){
    int n,x,y;
    printf("Enter the number ");
    scanf("%d",&n);

    for (x=1;x<=n*2-1;x++){
        for (y=1;y<=n*2-1;y++){
            if (x==y || y==n*2-x){
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