#include<stdio.h>
#include<math.h>

double scale(double,int);

int main(void){
    printf("%.2f",scale(1.2,5));
    return(0);
}

double scale(double x,int y){
    double a;
    a = pow(10,y);
    return (x*a);
}