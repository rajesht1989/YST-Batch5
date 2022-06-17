// write a program to get a three number from user and add them  and print it on console
#include<stdio.h>
void main(){
int g =getAThreeNumberFromUser();
printf("%d",g);
}
int getAThreeNumberFromUser(){
int x;
int y;
int z;
scanf("%i%i",&x,&y,&z);
return  x+y+z;
}
