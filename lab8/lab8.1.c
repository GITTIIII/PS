#include<stdio.h>
#include<string.h>

int main(){
    char name[4][15] = {"G. Washington","J. Adams","T. Jefferson","J. Madison"}; 
    char init[4][2];
    char last[4][15];
    printf("Initial First Name              Last Name\n");
    for (int x=0 ; x<4 ; x++){
        strncpy(init[x],name[x],2);
        init[x][2] = '\0';
        strcpy(last[x],&name[x][3]);
        printf("%18s",init[x]);
        printf("%23s\n",last[x]);
    }
    return(0);
}