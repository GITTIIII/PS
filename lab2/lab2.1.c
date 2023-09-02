#include <stdio.h>
int main(){
    float pH;
    printf("Please enter a pH value> ");
    scanf("%f",&pH);
    if (pH>7){
        if (pH<12){
            printf("Alkaline");
        }
        else{
            printf("Very alkaline");
        }
    }
    else if(pH==7){
        printf("Neutral");
    }
    else if (pH>2){
        printf("Acidic");
    }
    else{
        printf("Very acidic");
    }
    return(0);
}