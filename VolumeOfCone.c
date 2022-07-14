//write a program to get radius and height from user and find volume of cone 
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
float volumeOfCone(int a,int b){
    return 3.14*a*a*b/3;
}
void main(){
    float a=getRadius();
    float b=getHeight();
    float c=volumeOfCone(a,b);
    printf("Volume of cone is %f",c);
}
