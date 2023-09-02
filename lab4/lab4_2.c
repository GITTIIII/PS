#include <stdio.h>

int main(){
    int row=0,line=0,space,x=0,yes=0,status=0;
    char ch;
    
    while (1){
        printf("Please enter a positive number> ");
        fflush(stdin);
        status = scanf("%d",&row);
        if (status!=1){
            scanf("%c",&ch);
            printf("%c is an invalid input.\n",ch);
        }else if (row<=0){
            printf("%d is not a positive number.\n",row);
        }else if (row<2 && row>0 ){
            printf("%d is less than 2.\n",row);
        }else{
            break;
        }
    }
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