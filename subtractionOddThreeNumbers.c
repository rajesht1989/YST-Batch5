//write a program to get three number from user identify the ODD number and print it on console. 
#include<stdio.h>
int getNumber(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int subtraction(int a,int b,int c){
    return a-b-c;
}
void identifyOddNumber(int d){
    if(d%2==1){
        printf("The number is ODD number");
    }
    else{
        printf("The Number is NOT ODD number");
    }
}
void main(){
    int a=getNumber();
    int b=getNumber();
    int c=getNumber();
    int d=subtraction(a,b,c);
    printf("Answer is %d\n",d);
    identifyOddNumber(d);
}
