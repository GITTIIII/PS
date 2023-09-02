#include<stdio.h>

int main(){
    int n;
    printf("Please enter number of students> ");
    scanf("%d",&n);
    float h[n];
    for(int x=0 ; x<n ; x++){
        printf("Please enter student height [%d]> ",x+1);
        scanf("%f",&h[x]);
    }

    float avg;
    int size = sizeof(h)/sizeof(h[0]);
    for (int y=0 ; y<n ; y++){
        avg += h[y];
    }
    
    printf("Average hieght: %.2f",avg/size);
    return(0);
}