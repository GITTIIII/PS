#include<stdio.h>

int maximum(int,int,int,int);
int minimum(int,int,int,int);
void trim_mean(int,int,int,int);

int main(){
    int a,b,c,d;
    printf("The judges enter their scores> ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Max = %d\n",maximum(a,b,c,d));
    printf("Min = %d\n",minimum(a,b,c,d));
    trim_mean(a,b,c,d);
   return(0);
}

int maximum(int a,int b,int c,int d){
    int max;
    max = (a>=b && a>=c && a>=d)?a:
            (b>=a && b>=c && b>=d)?b:
            (c>=a && c>=b && c>=d)?c:
            d;
    return(max);
}

int minimum(int a,int b,int c,int d){
    int min;
    min = (a<=b && a<=c && a<=d)?a:
            (b<=a && b<=c && b<=d)?b:
            (c<=a && c<=b && c<=d)?c:
            d;
    return(min);
}

void trim_mean(int a, int b,int c,int d){
    float m;
    m = (a+b+c+d)-(maximum(a,b,c,d))-(minimum(a,b,c,d));
    printf("The score = %.2f",m/2);
}