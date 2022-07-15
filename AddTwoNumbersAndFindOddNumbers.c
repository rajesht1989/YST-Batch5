//write a program to get Two number from user and Add Them them and identify it is  odd number.
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
void identifyOddNumber(int z){
    if(z%2==0){
        printf("Given Number is Not odd");
    }
    else{
        printf("Given Number is Odd ");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int z=addTheNumbers(n,m);
    printf("Answer is %d\n",z);
    identifyOddNumber(z);
}
