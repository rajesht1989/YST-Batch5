//write a program to get a float from user and print it on console.
#include<stdio.h>
float getAFloatFromUser(){
    float g;
    scanf("%f",&g);
    return g;
}
void main(){
    float a = getAFloatFromUser();
    printf("%f",a);
}
