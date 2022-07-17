//write a program to get two number from user identify the EVEN number and print it on console. 
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int divide(int a,int b){
    return a/b;
}
void identifyEvenNumber(int c){
    if(c%2==0){
        printf("The number is EVEN number");
    }
    else{
        printf("The Number is NOT EVEN number");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=divide(a,b);
    printf("Answer is %d\n",c);
    identifyEvenNumber(c);
}
