//write a program to get side from user and identify the volume of cube and print it on console
#include<stdio.h>

int getASideFromUser();
int volumeOfCube(int d);
void main(){
    int a=getASideFromUser();
    int b = volumeOfCube(a);
    printf("volume is %i",b);
}

int getASideFromUser(){
    int c;
    printf("Enter the side of cube ");
    scanf("%i",&c);
    return c;
}

int volumeOfCube(int d) {
    return d * d * d;
}
