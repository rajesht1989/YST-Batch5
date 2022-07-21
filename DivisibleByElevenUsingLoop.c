//write a program to get number from user and  and print the number which is divisible by eleven
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void divisibleOrNot(int n){
    for (int i=1;i<=n;i++){
    if (i%11==0){
         printf("Answer is %d\n",i);
    }
}
}
void main(){
    int n=getNumberFromUser();
   divisibleOrNot(n);
}
