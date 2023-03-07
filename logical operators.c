//write a program get three numbers user and use logical operators and print it on console

#include <stdio.h>

int getNumberFromUser(){
int number;
scanf("%d",&number);
return number;
}
int andGate(int a,int b,int c){
return a&&b&&c;
}
int orGate(int a,int b,int c){
return a||b||c;
}

int main(){
printf("Enter The First Number ");
int a=getNumberFromUser();
printf("Enter The Second Number ");
int b=getNumberFromUser();
printf("Enter The Third number ");
int c=getNumberFromUser();

int andGateOperator=andGate(a,b,c);
int orGateOperator=orGate(a,b,c);

printf("AND Gate Value Is %d",andGateOperator);
printf("\nOR Gate value Is %d",orGateOperator);

return 0;
}
