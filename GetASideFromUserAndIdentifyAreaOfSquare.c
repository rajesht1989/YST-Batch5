//write a program to get a side from user and identify the area of squre
#include<stdio.h>
int getARadiusFromUser(){
    int b;
    printf("enter a value ");
    scanf("%i",&b);
    return b;
} 
int areaOfSqure(int c){
return c*c;
}
void main (){
    int a=getARadiusFromUser();
    int area=areaOfSqure(a);
    printf("Area is %i",area);
}
