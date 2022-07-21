//write a program to get number from user and print name on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    return number;
}
void printName(int number){
    for(int i=1;i<=number;i++){
        printf("5\n");
    }
}
void main(){
    int number=getNumberFromUser();
    printName(number);
}
