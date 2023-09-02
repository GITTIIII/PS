#include <stdio.h>

int main(){
    int h,m,s;
    int status;
    // int n=0;
    // int flag;
    // int status=0;
    // char skip_ch;

    printf("Enter h:m:s> ");
    status = scanf("%d:%d:%d",&h,&m,&s);
    printf("Status = %d\n",status);
    printf("h=%d, m=%d, s=%d",h,m,s);

    // do{
    //     flag = 0; //false
    //     printf("Enter a number> ");
    //     status = scanf("%d",&n);
    //     printf("Status = %d\n",status);

    //     if(status!=1){
    //         flag = 1;
    //         scanf("%c",&skip_ch);
    //         printf("%c is not a number!!!\n",skip_ch); 
    //     }

    // }while(flag);

    // printf("The number is %d.",n);

    return(0);
}