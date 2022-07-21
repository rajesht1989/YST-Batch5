//write a program to get number from user and print that times your number on console
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void printNumber(int a){
    for(int i=1;i<=a;i++){
        printf("%d\n",a);
    }
}
void main(){
    int a=getNum();
    printNumber(a);
}
