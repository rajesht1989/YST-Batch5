//write a program to get number from user and odd or even using if else statement.
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("enter a number ");
    scanf("%d",& n);
    return n;
}
void oddOrEven(int n) {
if(n%2==0){
    printf("even number");
}
else {
    printf("odd number");
}
}
void main() {
    oddOrEven(getNumberFromUser());
}
