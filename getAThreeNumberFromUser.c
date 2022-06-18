// write a program to get a three  number  from user and add them  and print it on console
#include<stdio.h>
void main(){
int d=getANumberFromUser();
printf("%i",d);
}
int getANumberFromUser(){
int a;
int b;
int c;
scanf("%d%d%d",&a,&b,&c);
return  a+b+c;
}
