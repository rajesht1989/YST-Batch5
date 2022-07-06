// Online C compiler to run C program online
#include <stdio.h>
int getNumberFromUser(){
    int a;
    printf ("enter the number=");
    scanf ("%d",&a);
    return a;
}
int squareNumber(int a){
  int square = a*a;  
    return square;
}
void main (){
    int a=getNumberFromUser();
   int square= squareNumber(a);
   printf ("Square is %d",square);
}
