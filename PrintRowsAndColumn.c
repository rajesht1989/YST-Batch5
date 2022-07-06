//write a program to get a number from user and print rows and column(square) and print it on console
#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}
void printStar(int a){
    int d=a;
for(int j=0;j<d;j++){
    printf("\n");
for(int i=0;i<d;i++)
    printf("*\t");
}
}
void main(){
int a = getNumberFromUser();
   printStar(a);
}
