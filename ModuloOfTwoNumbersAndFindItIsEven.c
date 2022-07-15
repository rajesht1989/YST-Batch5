//write a program to get two number from user and modulo them and identify it is even
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    return n;
}
int moduloTheNumber(int n,int m){
    return n%m;
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
    int z=moduloTheNumber(n,m);
    printf("Answer is %d\n",z);
    identifyEvenNumber(z);
}
