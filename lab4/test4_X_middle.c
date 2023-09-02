#include<stdio.h>

int main(){
    int n,x,y;
    printf("Enter the number of row ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (y=1;y<=n;y++){
            if (y==1 || y==n || x==1 || x==n || y==x || y==n-x+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return(0);
}