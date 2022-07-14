//write a program to get radius from user and identify the Area and Circumference of circle
#include<stdio.h>
float getARadiusFromUser();
float areaOfCircle(int r);
float circumferenceOfCircle(int r);
//return r;
void main(){
    float a=getARadiusFromUser();
    float b = areaOfCircle(b);
    float d = circumferenceOfCircle(b);
    printf("Area is %f\n",d);
    printf("Circumference of circle is %f",d);
}
float getARadiusFromUser(){
    int e;
    printf("Enter the radius of Circle ");
    scanf("%i",&e);
    return e;
}
float areaOfCircle(int r) {
    return 3.14 * r * r;
}
float circumferenceOfCircle(int r){
    return 2 * 3.14 * r;
}
