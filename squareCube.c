//write a program to get a side from user and find square of cube
#include<stdio.h>
int getSideFromUser(){
    int n;
    printf("Enter a side of the cube : ");
    scanf("%d",&n);
    return n;
}
int areaOfCube(int n){
   return 6*n*n; 
}
void main(){
    int n=getSideFromUser();
    int m=areaOfCube(n);
    printf("Area of cube is %d",m);
}
