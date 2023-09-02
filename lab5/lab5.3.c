#include<stdio.h>

void check_letter(char);
void to_uppercase(char);
void to_lowercase(char);

int main(){
    int in=0;
    printf("Enter a character> ");
    scanf("%c",&in);
    if (in>='a' && in<='z'){
        to_uppercase(in);
    }
    else if (in>='A' && in<='Z'){
        to_lowercase(in);
    }
    else{
        check_letter(in);
    }
    return(0);
}

void check_letter(char y){
    printf("%c is not a character.",y);
}

void to_uppercase(char y){
    printf("%c is converted to %c.",y,y-32);
}

void to_lowercase(char y){
    printf("%c is converted to %c.",y,y+32);
}