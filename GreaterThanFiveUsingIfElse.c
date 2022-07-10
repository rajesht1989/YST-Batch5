//write a program  to get a  number from user and find it is geater than five
#include<stdio.h>
int getANumberFromUser(){
    int n;
    printf("enter a number");
scanf("%d",&n);
return n;
}
void greaterThanFive(int n){
if(n>5){
    printf("greater than five ");
}
else if (n<5) {
    printf(" lesser than five ");
}
else {
    printf("equal");
}
}
void main(){
    int n = getANumberFromUser();
greaterThanFive(n);  
}
