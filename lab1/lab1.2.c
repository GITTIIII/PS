#include<stdio.h> 
#include<math.h>
int main(){
    float r,squarearea,circlearea,shadedarea; 
    printf("Please enter a radius> "); 
    scanf("%f",&r); 
    squarearea = (r+r)*(r+r); 
    circlearea = M_PI*r*r; 
    shadedarea = (squarearea-circlearea)/2; 
    printf("Shaded area is %f.", shadedarea); 
    return(0);
}
