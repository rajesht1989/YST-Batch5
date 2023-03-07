//write a program get number from user and use inncrement&decrement operators and print it on console

#include <stdio.h>

int getNumberFromUser(){
int number;
printf("Enter The Number ");
scanf("%d",&number);
return number;
}
int preincrement(int a){
printf("Preincrement On Line Value Is %d",++a);
printf("\nPreincrement On After Line Value Is %d",a);
}
int postincrement(int a){
printf("\nPostincrement On Line Value Is %d",a++);
printf("\nPostincrement On After Line Value Is %d",a);
}
int predecrement(int a){
printf("\nPredecrement On Line Value Is %d",--a);
printf("\nPredrement On After Line Value Is %d",a);
}
int postdecrement(int a){
printf("\nPostdecrement On Line Value Is %d",a--);
printf("\nPostdecrement On After Line Value Is %d",a);
}
int main(){
int a=getNumberFromUser();

preincrement(a);
postincrement(a);
predecrement(a);
postdecrement(a);
}
