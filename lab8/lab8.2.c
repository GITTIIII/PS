#include<stdio.h>
#include<string.h>
#define LEN 20
int main(){
    char first[15];
    char last[15];
    char full[LEN];

    printf("Enter your last name> ");
    scanf("%s",last);
    printf("Enter your first name> ");
    scanf("%s",first);
    if (strlen(first)+strlen(last)<LEN){
        strcpy(full,first);
        strcat(full," ");
        strcat(full,last);
    }
    else{
        first[1] = '.';
        first[2] = ' ';
        first[3] = '\0';
        strcpy(full,first);
        strcat(full,last);
    }
    printf("%s",full);
    return(0);
}