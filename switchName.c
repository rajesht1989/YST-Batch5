//write a program to get letter from user check it on name print it on console.
#include<stdio.h>
char getNameFromUser(){
    char n;
    printf("Enter a name : ");
    scanf("%c",&n);
    return n;
}
char identifyName(int n){
    switch(n){
    case 'a':
    case 'A':
    printf("Anjali");
    break;
    case 'b':
    case 'B':
    printf("Brindha");
    break;
    case 'c':
    case 'C':
    printf("Chitra");
    break;
    case 'd':
    case 'D':
    printf("divya");
    break;
    case 'e':
    case 'E':
    printf("Eswari");
    break;
default:
printf("no name");
break;
}
}
void main(){
 char n = getNameFromUser(); identifyName(n);
}

    
