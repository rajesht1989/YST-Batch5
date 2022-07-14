//write a program to get 2 number from user and add them and identify if only odd
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int add(int a,int b){
    return a+b;
}
void identifyOddNumber(int c){
    if(c%2==0){
        printf("Given Number is Not odd number");
    }
    else{
        printf("Given Number is Odd number");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=add(a,b);
    printf("Answer is %d\n",c);
    identifyOddNumber(c);
}
