//write a program to get three numbers from user and add then and print it on console
#include<stdio.h>
void main(){
    int c=numberVangudaSomberi();
    printf("%i",c);
}
int numberVangudaSomberi(){
    int p;
    int q;
    int r;
    scanf("%d%d%d",&p,&q,&r);
    return p+q+r;
}
