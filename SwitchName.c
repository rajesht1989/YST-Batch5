#include<stdio.h>
char getACharacterFromUser(){
    char initial;
    printf("enter a character :");
scanf("%c",&initial);
return initial;
}
void character(char n){
switch(n){
    
case 'a':
case 'A':
printf("Archana");
break;

case 'b':
case 'B':
printf("Brindha");
break;

case 'c':
case 'C':

printf("Chaitanya");
break;

case 'd':
case 'D':

printf("Dharsika");
break;

case 'e':
case 'E':
printf("Enanu therla");
break;

default:
printf("Ithukumela peru therla");
break;
}
}
void main(){
char n=getACharacterFromUser();
character(n);
}
