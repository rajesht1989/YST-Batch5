//write a program to get radius from user and identify the area and circumference of circle
#include<stdio.h>

int getARadiusFromUser();
float areaOfCircle(int r);
float circumOfCircle(int r);
void main(){
    int a=getARadiusFromUser();
    float b = areaOfCircle(a);
    float c = circumOfCircle(a);
    printf("Area is %f\n",b);
    printf("Circumference of circle is %f",c);
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
float circumOfCircle(int r){
    return 2 * 3.14 * r;
}
