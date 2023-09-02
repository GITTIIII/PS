#include<stdio.h>

int main(){
    int m=10,n=5;
    printf("m n *mp *np &m &n\n");
    printf("%d %d %p %p\n",m,n,&m,&n);
    int *mp,*np;
    printf("%d %d %p %p\n",m,n,&m,&n);
    mp = &m;
    printf("%d %d %d %d %p %p\n",m,n,*mp,*np,&m,&n);
    np = &n;
    printf("%d %d %d %d %p %p\n",m,n,*mp,*np,&m,&n);
    *mp += *np;
    printf("%d %d %d %d %p %p\n",m,n,*mp,*np,&m,&n);
    *np = *mp - *np;
    printf("%d %d %d %d %p %p\n",m,n,*mp,*np,&m,&n);  
    return(0);
}