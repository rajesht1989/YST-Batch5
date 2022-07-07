//Write a program to get a number from user and print even number and print it on console using for loop
#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    return a;
}
void printEven(int n){
for(int i=1;i<=n;i++){
    if(i%2==0){
        printf("%d\n",i);
    }
}
}
void main(){
int  a = getNumberFromUser();
printEven(a);
}
