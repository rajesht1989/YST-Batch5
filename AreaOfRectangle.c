//write a program to get side from user and identify the area of square
#include<stdio.h>
int getLengthFromUser();
int getBreadthFromUser();
int areaOfRectangle(int f, int g);
void main(){
    int a=getLengthFromUser();
    int c=getBreadthFromUser();
    int b = areaOfRectangle(a, c);
    printf("Area is %i",b);
}
int getLengthFromUser(){
int e;
printf ( "enter the length of the rectangle");
scanf("%i",&e);
return e;
}
int getBreadthFromUser(){
int k;
printf("enter the breadth of the rectangle");
scanf ("%i",&k);
return k;
}
int areaOfRectangle(int f, int g){
    return f*g;
}

