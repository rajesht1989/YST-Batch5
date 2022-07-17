//write a program to get three number from user identify the EVEN number and print it on console. 
#include<stdio.h>
int getNumber(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int divide(int a,int b,int c){
    return a/b/c;
}
void identifyEvenNumber(int d){
    if(d%2==0){
        printf("The number is EVEN number");
    }
    else{
        printf("The Number is NOT EVEN number");
    }
}
void main(){
    int a=getNumber();
    int b=getNumber();
    int c=getNumber();
    int d=divide(a,b,c);
    printf("Answer is %d\n",d);
    identifyEvenNumber(d);
}
