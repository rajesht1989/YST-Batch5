//write a program to get three number from user and modulo them and identify it is even
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    return n;
}
int moduloTheNumber(int n,int m,int o){
    return n%m%o;
}
void identifyEvenNumber(int z){
    if(z%2==0){
        printf("Given Number is even number");
    }
    else{
        printf("Given Number is Not even number");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int o=getNumberFromUser();
    int z=moduloTheNumber(n,m,o);
    printf("Answer is %d\n",z);
    identifyEvenNumber(z);
}
