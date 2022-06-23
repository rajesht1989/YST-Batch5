//write a program to get a side from user and identify the volume of cube
#include<stdio.h>
int getASideFromUser(){
    int b;
    printf("enter a value ");
    scanf("%i",&b);
    return b;
} 
int volumeOfCube(int d){
return d*d*d;
}
void main (){
    int b=getASideFromUser();
    int volume=volumeOfCube(b);
    printf("volume is %i",volume);
}
