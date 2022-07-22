#include<stdio.h>
int getANumberFromUser(){
    int n;
    printf("enter a number :");
scanf("%d",&n);
return n;
}
void number(int n){
switch(n){
case 1:
printf("guru");
    
break;
case 2:
printf("guru");
break;

case 3:
printf("gopal");
break;

case 4:
printf("Inbha");
break;

case 5:
printf("kali");
break;

default:
printf("Ithukumela peru ila");
break;
}
}
void main(){
int n=getANumberFromUser();
number(n);
}
