//write a program to get number from user and print only even numbers on console
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void printEvenNumbers(int a){
    for(int i=0;i<=a;i++){
        if(i%2==0){
        printf("%d\t",i);
    }
    }
}
void main(){
    int a=getNum();
    printEvenNumbers(a);
}
