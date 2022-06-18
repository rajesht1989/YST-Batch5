// write a program to get a number  from user and print it on console
#include<stdio.h>

void main(){
int c= getANumberFromUser();
printf("%i",c);
}
int getANumberFromUser(){
int j;
scanf("%d",&j);
return j;
}
