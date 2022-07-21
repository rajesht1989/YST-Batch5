//write a program to get 2 number from user and add them  print numbers that are divisible by 5 on console
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
int add(int a,int b){
    return a+b;
}
void divisibleby5(int c){
    if(c%5==0){
        printf("Yes %d is divisible by 5",c);
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=add(a,b);
    divisibleby5(c);
}
