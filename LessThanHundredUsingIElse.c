//write a program  to get a  number from user and find it is less than hundred
#include<stdio.h>
int getANumberFromUser(){
    int n;
    printf("enter a number :");
scanf("%d",&n);
return n;
}
void lesserThanHundred(int n){
if(n<100){
    printf("Less than Hundred ");
}
else if (n>100) {
    printf(" greater than Hundred ");
}
else {
    printf("equal");
}
}
void main(){
    int n = getANumberFromUser();
lesserThanHundred(n);  
}
