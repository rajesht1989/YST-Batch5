//write a program  to get a  number from user and find it is lesser than eight
#include<stdio.h>
int getANumberFromUser(){
    int n;
    printf("enter a number :");
scanf("%d",&n);
return n;
}
void belowEight(int n){
if(n<=8){
    printf("The given number is lesser to eight ");
}
else {
    printf("The given number is  larger then eight ");
}
}
void main(){
    int n = getANumberFromUser();
belowEight(n);  
}
