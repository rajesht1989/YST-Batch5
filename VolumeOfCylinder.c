//write a program to get radius from user and find volume of cylinder 
#include<stdio.h>
float getRadius(){
    float a;
    printf("Enter a radius : ");
    scanf("%f",&a);
    return a;
}
float getHeight(){
    float b;
    printf("Enter a height : ");
    scanf("%f",&b);
    return b; 
}
float volumeOfCylinder(int a,int b){
    return 3.14*(a*a)*b;
}
void main(){
    float a=getRadius();
    float b=getHeight();
    float c=volumeOfCylinder(a,b);
    printf("Volume of cylinder is %f",c);
}
