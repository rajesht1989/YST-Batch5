//write a program get number from user and identify the lessthan hundred.
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
void lessthan(int n){
  if(n<100){
    printf("The number is lessthan hundred");
  }
  else if(n>100){
    printf("The number is not lessthan hundred");
}
    else{
        printf("Equal");
    }
}
void main(){
    int n=getNumberFromUser();
    lessthan(n);
}
