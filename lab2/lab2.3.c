#include <stdio.h>
int main(){
    int speed;
    printf("Please enter a wind speed> ");
    scanf("%d",&speed);
    if (speed>=25 && speed<=38){
        printf("Strong wind at %d mph",speed);
    }
    else if (speed>=39 && speed<=54){
        printf("Gale at %d mph",speed);
    }
    else if (speed>=55 && speed<=72){
        printf("Whole gale at %d mph",speed);
    }
    else if (speed>72){
        printf("Hurricane at %d mph",speed);
    }
    else{
        printf("Not a strong wind at %d mph",speed);
    }
    return(0);
}