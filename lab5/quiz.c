#include<stdio.h>

int main(){
    int h,l,x,sum=0;

    while(1){
        printf("Enter lowest number> ");
        scanf("%d",&l);
        if (l<=0){
            printf("The lowest number %d is not a positive number.\n",l);
        }
        else{
            break;
        }
    }

    while(1){
        printf("Enter highest number> ");
        scanf("%d",&h);
        if (h<=0){
            printf("The highest number %d is not a positive number.\n",h);
        }
        else if (h<=l){
            printf("The higest number (%d) is less or equal to the lowest number (%d)!!!\n",h,l);
        }
        else{
            break;
        }
    }

    for (x=l;x<=h;x++){
        if (x%2!=0){
            printf("%d  ",x);
            sum += x;
        }
    }
    printf("\n");
    printf("Summation: %d",sum);
    
    return(0);
}