//write a program to get a value from user and find even or odd and print it on console 
#include<stdio.h>
int getNoFromUser(){
    int n;
    printf("Enter a number ");
    scanf("%d",& n);
    return n;
}
void positiveOrNegative(int n) {
if(n>=1){
    printf("Positive number");
}
else if(n<=-1) {
    printf("Negative number");
}
else{
    printf("Neutral");
}
}
void main() {
    int f=getNoFromUser();
    positiveOrNegative(f);
}
