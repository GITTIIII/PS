#include <stdio.h>
#include <math.h>

int main(){
    int num=0,j,sum=0,x=0;
    printf("Please enter a positive number> ");
    scanf("%d",&num);
    for(j=0 ; j<num+1 ; j++){
        x = pow(2,j);
        sum = sum+(3*x);
        printf("j = %d, sum = %d\n",j,sum);
    }
    printf("Summation: %d",sum);
    return(0);
}