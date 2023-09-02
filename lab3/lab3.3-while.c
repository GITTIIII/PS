#include <stdio.h>
#include <math.h>
int main(){
    int num=0,j=0,sum=0,x=0;
    printf("Please enter a positive number> ");
    scanf("%d",&num);
    while(j<num+1){
        x = pow(2,j);
        sum = sum+(3*x);
        printf("j = %d, sum = %d\n",j,sum);
        j++;
    }
    printf("Summation: %d",sum);
    return(0);
}