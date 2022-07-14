//write a program to get two  numbers from user and identify which is largest
#include<stdio.h>
int getNumber(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void largestNumber(int n,int m){
    if(n>m){
        printf("%d,This is a largest number");
    }
    else{
        printf("%d,This is a largest number");
    }
}
void main(){
    int n=getNumber();
    int m=getNumber();
    largestNumber(n,m);
}
