//write a program to get three number from user using relational and logical operator and print console
#include<stdio.h>
int getANumberFromUser(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    return a;
}
int largestNumber(int a, int b, int c){
if(a>b&&a>c){
return a;
}
if (b>c){
return b;
}
else {
    return c;
}
}
void main(){
int a = getANumberFromUser();
int b = getANumberFromUser();
int c = getANumberFromUser();
int largest =largestNumber(a, b, c);
printf ("largest number is %d",largest);
}
