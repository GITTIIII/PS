#include<stdio.h>
#include<math.h>

void scale(double,int);

int main(void){
    scale(1.2,5);
    return(0);
}

void scale(double x,int y){
    double a;
    a = pow(10,y);
    printf("%.2f",x*a);
}