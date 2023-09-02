#include<stdio.h>
#include<string.h>

int main(){
    char name[10];
    printf("Enter name> ");
    scanf("%[^\n]s",name);
    printf("%s",name);
    return(0);
}