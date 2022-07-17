//write a program to get side from user and identify the area of square and print on console
#include<stdio.h>
  int getASideFromUser();
  float areaOfSquare(int d);

int getASideFromUser(){
    int f;
    printf("Enter the side of the square ");
    scanf("%i",&f);
    return f;
}

float areaOfSquare(int side) {
    return side * side;
}
void main(){
    int a=getASideFromUser();
    float b = areaOfSquare(a);
    printf("Area is %f",b);
}
