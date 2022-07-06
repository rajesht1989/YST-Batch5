//Write the program to get a number from user and print row and column star on console.
#include<stdio.h>
    int getANumberFromUser(){
    int s;
    printf("Enter a number");
    scanf("%d",&s);
    return s;
}
void printStar(int s){
   int a=s;
    for(int i=0;i<s;i++){
    printf("\n");
    for(int i=0;i<s;i++)
    printf("*\t");
}
}
void main(){
int s = getANumberFromUser();
printStar(s);
}
