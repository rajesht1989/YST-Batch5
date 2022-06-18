//write a program to get two numbers from user and add them and print it on console
#include<stdio.h>
void main(){
    int c=getANumberFromUser();
    printf("%i",c);
}
int getANumberFromUser(){
    int j;
    int e;
    scanf("%d%d",&j,&e);
    return j+e;
}
