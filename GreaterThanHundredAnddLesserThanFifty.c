//write a program to get a number from user and identify it is greater than 50 and lesser than 100
#include<stdio.h>
int getNumber(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void greaterOrLesser(int n){
    if(n>50&&n<100){
printf("Yes");
}
else{
printf("No");
}
}
void main(){
    int n=getNumber();
    greaterOrLesser(n);
}
