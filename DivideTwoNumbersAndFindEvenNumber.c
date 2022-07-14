//write a program to get 2 number from user and divide them and identify if only even
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
        printf("Given Number is even number");
    }
    else{
        printf("Given Number is Not even number");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=divide(a,b);
    printf("Answer is %d\n",c);
    identifyEvenNumber(c);
}
