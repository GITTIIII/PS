#include <stdio.h>

int main(){
    int i=0, j=0, m=0, n=0, p=0;
    int count = 0;
    printf("i j m n p");

    while(count<1){
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        i = 4;
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        j = 8;
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        n = ++i * --j;
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        m = i + j--;
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        p = i + j;
        printf("\n%d %d %d %d %d",i,j,m,n,p);
        count++;
    }
    return(0);
}