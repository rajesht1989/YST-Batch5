//write a program to get a float number from user and print it on console
#include<stdio.h>

float getANumberFromUser(){
float c;
scanf("%f",&c);
return c;
}
void main(){
    float a=getANumberFromUser();
    printf("%f",a);
}
