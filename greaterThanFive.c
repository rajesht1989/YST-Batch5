//write a program get number from user and identify the greaterthan five.
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
void greaterthan(int n){
  if(n>5){
    printf("The number is Greaterthan five");
  }
  else if(n<5){
    printf("The number is not Greaterthan five");
}
    else{
        printf("Equal");
    }
}
void main(){
    int n=getNumberFromUser();
    greaterthan(n);
}
