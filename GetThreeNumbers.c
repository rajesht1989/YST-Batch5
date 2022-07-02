//write a program to get 3 number from user and identify the largest number using logical and relational operators
#include<stdio.h>
int getNo(){
    int i;
    printf("Enter No : ");
    scanf("%i",&i);
    return i;
}
int largestNo(int a,int b,int c){
    if(a>b&&a>c){
    return a;
}
if(b>c){
    return b;
}
else{
    return c;
}
}
void main(){
    int a=getNo();
    int b=getNo();
    int c=getNo();
    int d=largestNo(a,b,c);
    printf("Largest Number is : %i",d);
}
