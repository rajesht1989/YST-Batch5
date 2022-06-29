//write a program to get Three number from user the largest numbers using relational operators & logical operators.
#include<stdio.h>
void main(){
    int num1 , num2, num3;
    printf("enter a number");
    scanf("%d%d%d",&num1,&num2,&num3); 
}
if (num1>num2 & & num1>num3){
    printf("%d is greater",num1);
}
else  (num2>num1 & & num2>num3 ){
  printf("%d is greater",num2);
}
else {
printf("%d is greater",num3);
}
