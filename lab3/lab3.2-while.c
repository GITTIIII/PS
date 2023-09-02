#include <stdio.h>

int main(){
    int end,start=1,sum=0;
    printf("Please enter a positive number> ");
    scanf("%d",&end);
    while(start<end){
        if (start%5==0 || start%3==0){
            printf("%d\n",start);
            sum = start+sum;
        }
        start++;
    }
    printf("Summation: %d",sum);
    return(0);
}