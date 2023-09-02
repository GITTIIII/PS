#include<stdio.h> 
#define PI 3.14159 
int main(){
    float r, area,c; 
    printf("Please enter a diameter> "); 
    scanf("%f",&r); 
    r = r/2; 
    area = PI*r*r; 
    c = 2*PI*r; 
    printf("The area is %.4f \n", area); 
    printf("The circumference is %.4f",c); 
    return(0);
}