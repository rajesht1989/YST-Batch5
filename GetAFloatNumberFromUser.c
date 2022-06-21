// write a program to get a float  from user and print it on console

#include<stdio.h>

float getAFloatFromUser();

void main(){
    float  p= getAFloatFromUser();
printf("%f",p);
}

float getAFloatFromUser(){
float g;
scanf("%f",&g);
return g;
}
