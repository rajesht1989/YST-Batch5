//write a program to get radius and height from user and find volume of cone 
#include<stdio.h>
float getRadiusFromUser(){
    float a;
    printf("Enter a radius : ");
    scanf("%f",&a);
    return a;
}
float getHeightFromUser(){
    float b;
    printf("Enter a height : ");
    scanf("%f",&b);
    return b; 
}
float volumeOfCone(int a,int b){
    return 3.14*n*n*b/3;
}
void main(){
    float a=getRadiusFromUser();
    float b=getHeightFromUser();
    float c=volumeOfCone(a,b);
    printf("Volume of cone is %f",c);
}    
