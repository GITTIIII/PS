#include<stdio.h>
#include<string.h>

int main(){
    char s[10];
    int palin=1;
    printf("Enter a word> ");
    scanf("%s",s);
    for (int x = 0 ; x<strlen(s) ; x++){    
        if (s[x]==strrev(s)[x]){
        }
        else{
            palin = 0;
        }
    }
    if (palin==1){
            printf("%s is a palindome.",s);
        }
        else{
            printf("%s is not a palindome and its reverse is %s.",s,strrev(s));
        }
    return(0);
}