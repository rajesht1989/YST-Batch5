#include<stdio.h>
char getAcharFromUser(){
 char i;
 printf("enter a character ");
scanf ("%c",&i);
return i; 
}
void printCharInWords(int i){

if (i=='a'|| i=='A'){
  printf("Anikha");
  }
else if (i=='b'|| i=='B'){
    printf("banu");
}
else if (i=='c'|| i=='C'){
    printf("chaitanya");
}
else if (i=='d'|| i=='D'){
    printf("Dharsini");
}
else if (i=='e'|| i=='E'){
    printf("Elakiya");
}
else if (i=='f'|| i=='F'){
    printf("Fathima");
}
else if (i=='g'|| i=='G'){
    printf("Geetha");
}
else if (i=='h'|| i=='H'){
    printf("harsini");
}
else if (i=='i'||i=='I'){
    printf("Ishwarya");
}
else if (i=='j'||i=='J'){
    printf("jenifer");
}
else if (i=='k'||i=='K'){
    printf("kanika");
}
else if (i=='l'||i=='L'){
    printf("lena");
}
else if (i=='m'||i=='M'){
    printf("Mathumitha");
}
else if (i=='n'||i=='N'){
    printf("Nainika");
}
else if (i=='o'||i=='O'){
    printf("oviya");
}
else if (i=='p'||i=='P'){
    printf("prasanya");
}
else if (i=='q'||i=='Q'){
    printf("queen");
}
else if (i=='r'||i=='R'){
    printf("riya");
}
else if (i=='s'||i=='S'){
    printf("susmitha");
}
else if (i=='t'||i=='T'){
    printf("thrisha");
}
else if (i=='u'||i=='U'){
    printf("usha");
}   
else if (i=='v'||i=='V'){
    printf("venmathi");
}
else if (i=='w'||i=='W'){
    printf("warmika");
}
else if (i=='x'||i=='X'){
    printf("Xella");
}
else if (i=='y'||i=='Y'){
    printf("yashika");
}
else if (i=='z'||i=='Z'){
    printf("zeeva");
}
else {
 printf ("ethuku mela character ila pah");
}
}
void main(){
  printCharInWords(getAcharFromUser ());
}

