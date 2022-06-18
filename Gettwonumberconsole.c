//write a program to get two numbers from user and add then and print it on console
#include<stdio.h>
void main(){
    int c=getANumberFromUser();
    int d=getANumberFromUser();
    printf("%d %d",c,d);
}
int getANumberFromUser(){
    int p;
    scanf("%d",&p);
    return p;
}
