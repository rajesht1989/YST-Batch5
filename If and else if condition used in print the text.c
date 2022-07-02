#include <stdio.h>

int getTheNumberFromUser(){
    int number;
    printf ("enter the number");
    scanf("%d",& number);
    return number;
}
int getNumber (int number)
{
    if (number==1){
        printf ("the number is ONE");
    }
else if (number==2){
    printf ("the number is TWO");
}
else if (number==3)
{
    printf ("the number is THREE");
  
}
else if (number==4){
    printf ("the number is FOUR");
}
else if (number==5){
    printf ("the number is FIVE");
}
else if (number==6){
    printf ("the number is SIX");
    
}
else if (number==7){
    printf ("the number is SEVEN");
    }
    else if (number==8){
    printf ("the number is EIGHT");
    }
    
else if (number==9){
    printf ("the number is NINE");
    }
    
    else if (number==10){
      printf ("the number is TEN");
    } 
    else {
      printf ("not matching");
      }
      }
      void main (){
        int number = getTheNumberFromUser();
        getNumber(number);
      }
    
