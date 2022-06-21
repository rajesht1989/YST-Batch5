//write a program to get radius from user and identify the volume of sphere and print it on console
#include<stdio.h>

int getARadiusFromUser();
float volumeOfSphere(int x);
void main(){
    int a=getARadiusFromUser();
    float b = volumeOfSphere(a);
    printf("Volume is %f",b);
}

int getARadiusFromUser(){
    int c;
    printf("Enter the radius of sphere ");
    scanf("%i",&c);
    return c;
}

float volumeOfSphere(int x) {
    return (4/3) * 3.14 * x * x * x;
}

