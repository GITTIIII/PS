#include<stdio.h>

int main(){
    int n,x,y;
    while(1){
        printf("Enter the number of rows ");
        scanf("%d",&n);
        if (n%2==0){
            printf("%d is not odd number\n",n);
        }
        else{
            break;
        }
    }
    for (x=1;x<=n;x++){
        for (y=1;y<=n;y++){
            if (y==n/2+1 || x==n/2+1){
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return(0);
}