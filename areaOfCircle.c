// to find area of circle,get radius as input from user

#include<stdio.h>

float getRadiusFromUser(){
    float a;
    printf ("Enter A Radius");
    scanf("%f",&a);
}
float areaFromCircle(float r){
    return(3.14*(r*r));
}
void main(){
     Printf("Enter The Radius");

    float number=getRadiusFromUser();

    float area=areaFromCircle(number);
    
    printf ("area is %f ",area);
}
