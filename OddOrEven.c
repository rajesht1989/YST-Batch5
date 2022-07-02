//write a program to get a value from user and find even or odd and print it on console 
#include<stdio.h>
int getNoFromUser(){
    int n;
    printf("Enter a number ");
    scanf("%d",& n);
    return n;
}
void oddOrEven(int n) {
if(n%2==0){
    printf("Even number");
}
else {
    printf("Odd number");
}
}
void main() {
    oddOrEven(getNoFromUser());
}
