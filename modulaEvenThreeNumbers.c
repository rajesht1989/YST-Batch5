//write a program to get three number from user identify the EVEN number and print it on console. 
#include<stdio.h>
int getNumber(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    return a;
}
int modula(int a,int b,int c){
    return a%b%c;
}
void identifyEvenNumber(int d){
    if(d%2==0){
        printf("The Number EVEN Number");
    }
    else{
        printf("The Number Not EVEN Number");
    }
}
void main(){
    int a=getNumber();
    int b=getNumber();
    int c=getNumber();
    int d=modula(a,b,c);
    printf("Answer is %d\n",d);
    identifyEvenNumber(d);
}
