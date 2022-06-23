//write a program to get length and breadth from user and identify the area of rectangle and print it on console

#include<stdio.h>
int getLengthFromUser(){
    int a;
    printf ("enter length");
    scanf ("%i",&a);
    return a;
}
int getBreadthFromUser(){
    int b;
    printf("enter Breadth");
    scanf("%i",&b);
    return b;
}
int findAreaOfRectangle(int a,int b){
    return a*b;
}
void main(){
    int length =getLengthFromUser();
    int Breadth =getBreadthFromUser();
    int area=findAreaOfRectangle(length,Breadth);
    printf("area is %i",area);
}
