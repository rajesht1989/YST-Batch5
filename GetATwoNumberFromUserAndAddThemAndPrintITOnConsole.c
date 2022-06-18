// write a program to get a two number from user and add them  and print it on console
#include<stdio.h>
void main(){
int e =getATwoNumberFromUser();
printf("%i",e);
}
int getATwoNumberFromUser(){
int p;
int q;
scanf("%d%d",&p,&q);
return  p+q;
}
