//write a program to get two number from user and add them and identify its even 
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
int addTheNumbers(int n,int m){
    return n+m;
}
void identifyEvenNumber(int z){
    if(z%2==0){
        printf("Given Number is even r");
    }
    else{
        printf("Given Number is Not even ");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int z=addTheNumbers(n,m);
    printf("Answer is %d\n",z);
    identifyEvenNumber(z);
}
