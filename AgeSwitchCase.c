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
    case 2:
    case 3:
    printf("infant");
break;
case 4:
case 5:
printf("kid");
break;
default:
printf("man");
break;
}
}
void main(){
int n=getANumberFromUser();
number(n);
}
