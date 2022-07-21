//write a program to get number from user and print numbers that are divisible by 11 on console
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void printNumbersDivisibleBy11(int a){
    for(int i=0;i<=a;i++){
        if(i%11==0){
        printf("%d\t",i);
    }
    }

void main(){
    int a=getNum();
    printNumbersDivisibleBy11(a);
}
