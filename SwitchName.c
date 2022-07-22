#include<stdio.h>
char getACharacterFromUser(){
    char initial;
    printf("enter a character :");
scanf("%c",&initial);
return initial;
}
void character(char a){
switch(a){
    
case 'a':
case 'A':
printf("Anita");
break;

case 'b':
case 'B':
printf("Bavi");
break;

case 'c':
case 'C':

printf("Chitra");
break;

case 'd':
case 'D':

printf("Deepika");
break;

case 'e':
case 'E':
printf("Elizabeth");
break;

default:
printf("Ithukumela peru therla");
break;
}
}
void main(){
char a=getACharacterFromUser();
character(a);
}
