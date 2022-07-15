//write a program to get Three number from user and Add Them them and identify it is even number
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
int addTheNumbers(int n,int m,int o){
    return n+m+o;
}
void identifyEvenNumber(int z){
    if(z%2==0){
        printf("Given Number is even");
    }
    else{
        printf("Given Number is not even ");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int o=getNumberFromUser();
    int z=addTheNumbers(n,m,o);
    printf("Answer is %d\n",z);
    identifyEvenNumber(z);
}
