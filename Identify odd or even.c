#include <stdio.h>

int getNumberFromUser(){
  int number;
  printf ("enter the number ");
  scanf("%d",& number);
  return number;
}
int identifyOddOrEven(int number){
if(number%2==0){
  printf ("the number is even");
}
else {
  printf ("the number is add");
}
}
void main()
{
  int number=getNumberFromUser();
  
 identifyOddOrEven(number);
 }
