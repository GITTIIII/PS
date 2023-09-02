#include<stdio.h>

void convert_to_second(int,int,int);

int main(){
    int h=0,m=0,s=0;
    printf("Enter the time (hh:mm:ss)> ");
    scanf("%d:%d:%d",&h,&m,&s);
    convert_to_second(h,m,s);
    return(0);
}

void convert_to_second(int h,int m,int s){
    int totalsec=0;
    if (h!=0){
        h = h*3600;
    }
    if (m!=0){
        m = m*60;
    }
    totalsec += h+m+s;
    printf("Converting to... %d second(s)",totalsec);
}