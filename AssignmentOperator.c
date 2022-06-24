//write a program that uses assignment operator and print it on console
#include<stdio.h>
int getAValue();
int useOperator();
void main(){
    int a= getAValue();
    int b= getAValue();
    int c= useOperator(a,b);
    printf("Value is :  %i",c);
}
int getAValue(){
    int a;
    printf("Enter a value : ");
    scanf("%i",&a);
    return a;
}
int useOperator(int a,int b){
    return a+=b;
}
