//write a program is get two number from user and use assignment operators and print it on console

#include <stdio.h>

int getNumberFromUser(){
int number;
scanf("%d",&number);
return number;
}
int first(int a,int b){
return a+=b;
}
int second(int a,int b){
return a-=b;
}
int third(int a,int b){
return a*=b;
}
int fourth(int a,int b){
return a/=b;
}
int five(int a,int b){
return a%=b;
}
int main(){
printf("Enter The First Number ");
 int a=getNumberFromUser();
 printf("Enter The Second Number ");
 int b=getNumberFromUser();
 int  firstSymble=first(a,b);
 int secondSymble=second(a,b);
 int ThirdSymble=third(a,b);
 int fourthSymble=fourth(a,b);
 int fifthSymble=five(a,b);

 printf("First Operator Is %d",firstSymble);
 printf("\nSecond Operator Is %d",secondSymble);
 printf("\nThird Operator Is %d",ThirdSymble);
 printf("\nFourth Operator Is %d",fourthSymble);
 printf("\nFifth Operator Is %d",fifthSymble);
 return 0;
 }
