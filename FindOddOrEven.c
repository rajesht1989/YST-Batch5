//write a program to get number from user and  identify the number is odd or even
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    return n;
}
void identifyEvenOrOddNumber(int n){
    if(n%2==0){
        printf("Given Number is even number");
    }
    else{
        printf("Given Number is odd number");
    }
}
void main(){
    int n=getNumberFromUser();
    printf("Answer is %d\n",n);
    identifyEvenOrOddNumber(n);
}
