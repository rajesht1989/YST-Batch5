//write a program to get Two number from user and add Them  and identify it is divisible by five
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
int addTheNumbers(int n,int m){
    return n+m;
}
void divisibleOrNot(int z){
    if(z%5==0){
        printf("It is  divisible by five)
    }
    else{
        printf("It not is divisible by five");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int z=addTheNumbers(n,m);
    printf("Answer is %d\n",z);
   divisibleOrNot(z);
}
