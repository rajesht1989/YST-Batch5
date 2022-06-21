//write a program to get radius from user and identify the area of circle
#include<stdio.h>

int getARadiusFromUser();
float areaOfCircle(int r);
void main(){
    int a=getARadiusFromUser();
    float b = areaOfCircle(a);
    printf("Area is %f",b);
}

int getARadiusFromUser(){
    int x;
    printf("Enter the radius of Circle ");
    scanf("%i",&x);
    return x;
}

float areaOfCircle(int r) {
    return 3.14 * r * r;
}
