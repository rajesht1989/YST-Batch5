//write a program get number from user and identify the number equal nineteen.
#include<stdio.h>
int getNumberFromUser(){
    int m;
    printf("Enter the number");
    scanf("%d",&m);
    return m;
}
void equal(int m){
  if(m==19){
    printf("The number is equal nineteen");
  }
  else if(m==19){
    printf("The number is not equal nineteen");
}
    else{
    }
}
void main(){
    int m=getNumberFromUser();
    equal(m);
}
