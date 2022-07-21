//write a program to get number from user and print that times your name on console
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void printName(int a){
    for(int i=1;i<=a;i++){
        printf("Inbha\n");
    }
}
void main(){
    int a=getNum();
    printName(a);
}
