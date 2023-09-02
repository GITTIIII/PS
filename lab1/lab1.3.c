#include<stdio.h> 
#include<math.h> 
#define DOWN 500 
int main(){
    float price,rate,month,monthpayment,x;
    printf("Please enter the purchase price> "); 
    scanf("%f",&price); 
    printf("Please enter the annual interest rate> "); 
    scanf("%f",&rate); 
    printf("Please enter the total number of payments> "); 
    scanf("%f",&month);
    price = price-DOWN; 
    rate = rate/12; 
    x = pow(1+rate, -month); 
    monthpayment = (rate*price)/(1-x);

    printf("***************************** \n");
    printf("The amount borrowed: $%.2f \n",price); 
    printf("The monthly payment: $%.2f",monthpayment);
    return(0);
}
