#include <stdio.h>
int main(){
    int a,b,c;
    int max,mid,min;
    printf("Enter the first number> ");
    scanf("%d",&a);
    printf("Enter the second number> ");
    scanf("%d",&b);
    printf("Enter the third number> ");
    scanf("%d",&c);
    //Max
    // if (a>b && a>c){
    //     max = a;
    // }
    // else if (b>a && b>c){
    //     max = b;
    // }
    // else{
    //     max = c;
    // }
    max = a>b?a:b;
    max = c>max?c:max;
    //Mid
    // if (a>b && a<c){
    //     mid = a;
    // }
    // else if (b>a && b<c){
    //     mid = b;
    // }
    // else {
    //     mid = c;
    // }
    mid = a>b?b:a;
    mid = c>mid?c:mid;
    //Min
    // if (a<b && a<c){
    //     min = a;
    // }
    // else if (b<a && b<c){
    //     min = b;
    // }
    // else{
    //     min = c;
    // }
    min = a<b?a:b;
    min = c<min?c:min;
    printf("Max=%d Mid=%d Min=%d",max,mid,min);
    return(0);
}