//write a program to get radius and height from user and find volume of cone 
#include<stdio.h>
float getRadiusFromUser(){
    float n;
    printf("Enter a radius : ");
    scanf("%f",&n);
    return n;
}
float getHeightFromUser(){
    float b;
    printf("Enter a height : ");
    scanf("%f",&b);
    return b; 
}
float volumeOfCone(int n,int b){
    return 3.14*n*n*b/3;
}
void main(){
    float n=getRadiusFromUser();
    float b=getHeightFromUser();
    float c=volumeOfCone(n,b);
    printf("Volume of cone is %f",c);
}    
