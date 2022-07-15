//write a program to get Three number from user and Use Modulo Them  and identify it is odd number
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
int moduloTheNumbers(int n,int m,int o){
    return n%m%o;
}
void identifyOddNumber(int z){
    if(z%2==0){
        printf("Given Number is Not odd");
    }
    else{
        printf("Given Number is  odd");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int o=getNumberFromUser();
    int z=moduloTheNumbers(n,m,o);
    printf("Answer is %d\n",z);
    identifyOddNumber(z);
}
