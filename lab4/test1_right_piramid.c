#include <stdio.h>

int main(){
    int n=0,status=0,x,y;
    char ch;

    while(1){
        printf("Please enter a number> ");
        fflush(stdin);
        status = scanf("%d",&n);
        if (status!=1){
            scanf("%c",&ch);
            printf("%c is an invalid input.\n",ch);
        }else if (n<1 || n>9){
            printf("Number %d is not in range.\n",n);
        }else{
            break;
        }
    }

    for (x=1;x<=n+1;x++){
        for (y=0;y<x;y++){
        printf("%d ",y);
        }
    printf("\n");
    }
    for (x=n;x>0;x--){
        for (y=0;y<x;y++){
        printf("%d ",y);
        }
    printf("\n");
    }
    return(0);
}