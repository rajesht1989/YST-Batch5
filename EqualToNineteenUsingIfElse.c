//write a program  to get a  number from user and find it is geater than five
#include<stdio.h>
int getANumberFromUser(){
    int n;
    printf("enter a number :");
scanf("%d",&n);
return n;
}
void EqualToNinteen(int n){
if(n==19){
    printf("The given number is equal to ninteen  ");
}
else {
    printf("The given nuber is not equal to ninteen ");
}
}
void main(){
    int n = getANumberFromUser();
EqualToNinteen(n);  
}
