//write a program to get side from user and identify the area of square and print it on console
#include<stdio.h>

int getASideFromUser();
int areaOfSquare(int d);
void main(){
    int a=getASideFromUser();
    int b = areaOfSquare(a);
    printf("area is %i",b);
}

int getASideFromUser(){
    int c;
    printf("Enter the side of square ");
    scanf("%i",&c);
    return c;
}

int areaOfSquare(int d) {
    return d * d;
}

