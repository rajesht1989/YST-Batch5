//write a program to get length and breadth from user and identify the area of rectangle and circumference of rectangle and print it on console
#include<stdio.h>
int getLengthFromUser();
int getBreadthFromUser();
int areaOfRectangle(int a ,int b);
int circumferenceOfRectangle(int a,int b);
void main(){
    int z=getLengthFromUser();
    int y=getBreadthFromUser();
    int x = areaOfRectangle(z,y);
    int w=circumferenceOfRectangle(z,y);
    printf("Area of the rectangle is %i\n",x);
    printf("Circumference of rectangle is %i",w);
}

int getLengthFromUser(){
    int c;
    printf("Enter the length of the rectangle");
    scanf("%i",&c);
    return c;
}
int getBreadthFromUser(){
    int d;
    printf("Enter the breadth of the rectangle");
    scanf("%i",&d);
    return d;
}
int areaOfRectangle(int a,int b) {
    return a * b ;
}
int circumferenceOfRectangle(int a,int b){
    return 2*(a+b);
}
