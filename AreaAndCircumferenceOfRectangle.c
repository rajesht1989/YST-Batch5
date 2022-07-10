//write a program to get length and breadth from user and identify the area of rectangle and circumference of rectangle and print it on console
#include<stdio.h>
int getLengthFromUser();
int getBreadthFromUser();
int areaOfRectangle(int e,int f);
int circumOfRectangle(int e,int f);
void main(){
    int a=getLengthFromUser();
    int x=getBreadthFromUser();
    int b = areaOfRectangle(a,x);
    int g=circumOfRectangle(a,x);
    printf("Area is %i\n",b);
    printf("Circumference of rectangle is %i",g);
}

int getLengthFromUser(){
    int c;
    printf("Enter the value of length ");
    scanf("%i",&c);
    return c;
}
int getBreadthFromUser(){
    int d;
    printf("Enter the value of breadth ");
    scanf("%i",&d);
    return d;
}
int areaOfRectangle(int e,int f) {
    return e * f ;
}
int circumOfRectangle(int e,int f){
    return 2*(e+f);
}
