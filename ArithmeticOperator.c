//write a program that uses assignment operator and print it on console
#include<stdio.h>
int getANumber();
int assignmentOperator();

int getANumber(){
    int g;
    printf("Enter a Number:");
    scanf("%d",&g);
    return g;
}
int assignmentOperator(int g, int r){
    return g*=r;
}

void main(){
    int g= getANumber();
    int r= getANumber();
    int p= assignmentOperator(g,r);
    printf("Value is : %d",p);
}
