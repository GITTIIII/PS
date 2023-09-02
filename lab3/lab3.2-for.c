#include <stdio.h>

int main(){
    int end,start,sum=0;
    printf("Please enter a positive number> ");
    scanf("%d",&end);
    for (start = 1 ; start<end ; start++){
        if (start%5==0 || start%3==0){
            printf("%d\n",start);
            sum = start+sum;
        }
    }
    printf("Summation: %d",sum);
    return(0);
}