//write a program to get a radius from user and identify the area of circle
#include<stdio.h>
float getARadiusFromUser(){
    float a;
    printf("enter a radius ");
    scanf("%f",& a);
    return a;
} 
float areaOfCircle(float r){
return ((3.14)*(r*r));
}
void main (){
    float a=getARadiusFromUser();
    float area=areaOfCircle(a);
    printf("Area is %f", area);
}
