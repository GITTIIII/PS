#include <stdio.h>
int main(){
    int n,x,y,status;
    char ch;
    while(1){
        printf("Enter a positive odd number> ");
        fflush(stdin);
        status = scanf("%d",&n);
        if (status!=1){
            scanf("%c",&ch);
            printf("%c is an invalid input.\n",ch);
        }
        else if (n<1){
            printf("%d is not a positive number.\n",n);
        }
        else if (n%2==0){
            printf("%d is not odd number.\n",n);
        }
        else{
            break;
        }
    }
    for (x=1;x<=n;x++){
        for (y=1;y<=n;y++){
            if (x==n/2+1 && y==n/2+1){
                printf("x");
            }
            else if (y==x){
                printf("\\");
            }
            else if (y==n-x+1){
                printf("/");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return(0);
}