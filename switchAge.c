//write a program to get age from user and identify print it on console.
#include<stdio.h>
int getAgeFromUser(){
    int age;
    printf("Enter a age");
    scanf("%d",&age);
    return age;
}
int getAge(int age){
switch(age){
case 1:
case 2:
case 3:
printf("Infant");
break;
case 4:
case 5:
case 6:
printf("kid");
break;
default:
printf("Men");
break;
}
}
void main(){
    getAge(getAgeFromUser());
}

    
