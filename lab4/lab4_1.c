#include <stdio.h>

int main(){
    int row,line=0,space,x=0;
    printf("Please enter a positive number> ");
    scanf("%d",&row);
    for (x=1;x<=row;x++){
        for (space=1;space<=row-x;space++){
            printf("  ");
        }
        for (line=1;line<=(2*x)-1;line++){
            printf("* ");
        }
    printf("\n");       
    }
    return(0);
}