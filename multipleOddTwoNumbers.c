//write a program to get two number from user identify the ODD number and print it on console. 
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int multiple(int a,int b){
    return a*b;
}
void identifyOddNumber(int c){
    if(c%2==1){
        printf("The number is ODD number");
    }
    else{
        printf("The Number is NOT ODD number");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=multiple(a,b);
    printf("Answer is %d\n",c);
    identifyOddNumber(c);
}
