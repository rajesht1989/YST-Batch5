//write a program to understand increment and decrement operator

#include<stdio.h>
int getAValueFromUser(){
int Value ;
printf("enter a number ");
scanf ("%d",&Value);
return Value;
}

void preincrement (int a) {
    printf ("Preincrement on line Value is %d\n",++a);
    printf ("Preincrement after line Value is %d\n",a);
}
void postincrement (int a){
    printf ("Post increment on line Value is %d\n",a++);
    printf ("Post increment after line Value is %d\n",a);
}
void predecrement (int a){
    printf ("Predecrement on line Value is %d\n",--a);
    printf ("Predecrement after line Value is %d\n",a);
}
void postdecrement (int a){
    printf ("Post decrement on line Value is %d\n",a--);
    printf ("Post decrement after line Value is %d\n",a);
}

void main(){
    int a = getAValueFromUser();
    
preincrement(a);
postincrement(a);
predecrement(a);
postdecrement(a);
}
