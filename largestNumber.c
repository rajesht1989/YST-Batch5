//write a program get two number from user and identify largest number.
#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    return a;
}
void identifyByLargestNumber(int a,int b){
  if(a>b){
    printf("The largest number is a  ");
  }
  else {
    printf("The largest number is b ");
  }
}
void main(){
  int a = getNumberFromUser();
  int b = getNumberFromUser();
  identifyByLargestNumber(a,b);
}
