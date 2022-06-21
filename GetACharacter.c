// write a program to get a character  from user and print it on console

#include<stdio.h>

char getACharFromUser();

void main(){
    char a= getACharFromUser();
printf("%c",a);
}

char getACharFromUser(){
char b;
scanf("%c",&b);
return b;
}
