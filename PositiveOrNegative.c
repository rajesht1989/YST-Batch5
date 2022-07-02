#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("enter a number ");
    scanf("%d",& n);
    return n;
}
int positiveOrNegative (int n){
 
 if(n>1){
 printf("The number is positive");
}
else if (n<-1){
printf("The number is negative");
}
else {
    printf("neutral");
}
}
void main() {
    positiveOrNegative(getNumberFromUser());
}
