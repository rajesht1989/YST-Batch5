//write a program to get two  numbers from user and identify which is largest
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void largest(int a,int b){
    if(a>b){
        printf("First number is largest");
    }
    else{
        printf("Second number is largest");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    largest(a,b);
}
