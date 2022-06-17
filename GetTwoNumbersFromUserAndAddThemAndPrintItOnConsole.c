//write a program to get two numbers from user and add them and print it on console
#include<stdio.h>
void main(){
    int c=numberVangudaSomberi();
    printf("%i",c);
}
int numberVangudaSomberi(){
    int p;
    int q;
    scanf("%d%d",&p,&q);
    return p+q;
}
