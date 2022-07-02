//write a program to get three number from user identify the largest numbers using relational operators & logical operators.
#include<stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter Number");
    scanf("%d",&i);
    return i;
}
int largestNumber(int a,int b,int c){
if (a>b&&a>c){
    return a;
}
if(b>c){
    return b;
}
else{
    return c;
}
}
void main(){
    int a=getANumberFromUser();
    int b=getANumberFromUser();
    int c=getANumberFromUser();
    int largest =largestNumber(a,b,c);
    printf("Answer is%d", largest);
}
