#include<stdio.h>

void readData(int*);
void findFibonacci(int[],int);
void printFibonacci(int[],int);

int main(){
    int s;
    readData(&s);
    int fibo[s];
    fibo[0] = 0;
    fibo[1] = 1;
    findFibonacci(fibo,s);
    printFibonacci(fibo,s);
    return(0);
}

void readData(int*s){
    printf("Please enter a number for the Fibonacci sequence> ");
    scanf("%d",s);
}

void findFibonacci(int fibo[],int s){
    for(int x=2 ; x<s ; x++){
        fibo[x] = fibo[x-1] + fibo[x-2]; 
    }
}

void printFibonacci(int fibo[],int s){
    printf("Index  Element\n");
    for(int x=0 ; x<s ; x++){
        printf("%3d  %7d\n",x,fibo[x]);
    }
}