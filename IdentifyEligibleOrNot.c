//write a program to get a age from user and identify if the person is eligible for vote or not
#include<stdio.h>
int getAge();
int voter();
void main(){
   voter(getAge());
}
int getAge(){
    int c;
    printf("Enter the age please ");
    scanf("%i",&c);
    return c;
}
int voter(int c){
    c>18? printf("Eligible") : printf("Not Eligible");
}
