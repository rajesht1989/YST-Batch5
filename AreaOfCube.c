//write a program to get a side from user and find square of cube
#include<stdio.h>
int getSide(){
    int a;
    printf("Enter a side : ");
    scanf("%d",&a);
    return a;
}
int areaOfCube(int a){
   return 6*a*a; 
}
void main(){
    int a=getSide();
    int b=areaOfCube(a);
    printf("Area of cube is %d",b);
}
