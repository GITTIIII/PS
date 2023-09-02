#include <stdio.h>
int main(){
    int speed;
    printf("Please enter a wind speed> ");
    scanf("%d",&speed);
    (speed>=25 && speed<=38)?printf("Strong wind at %d mph",speed):
    
    (speed>=39 && speed<=54)?printf("Gale at %d mph",speed):

    (speed>=55 && speed<=72)?printf("Whole gale at %d mph",speed):

    (speed>72)?printf("Hurricane at %d mph",speed):
    
    printf("Not a strong wind at %d mph",speed);
    return(0);
}