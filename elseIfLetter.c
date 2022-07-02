//write a program get a to z letters from user print it on console.
#include<stdio.h>

char getLetterFromUser(){
  char letter;
      printf("Enter a letter");
      scanf("%c",& letter);
return letter;
}
void letter(char Name ){
  if (Name=='a'||Name=='A'){
      printf("Anitha");
  }
  else if(Name=='b'||Name=='B'){
      printf("Bharathi");
  }
  else if(Name=='c'||Name=='C'){
      printf("Chantra");
  }
  else if(Name=='d'||Name=='D'){
      printf("Devi");
  }
  else if(Name=='e'||Name=='E'){
      printf("Eswari");
  }
  else if(Name=='f'||Name=='F'){
      printf("faritha");
  }
  else if(Name=='g'||Name=='G'){
      printf("Gowri");
  }
  else if(Name=='h'||Name=='H'){
      printf("Harini");
  }
  else if(Name=='i'||Name=='I'){
      printf("Ilakya");
  }
  else if(Name=='j'||Name=='J'){
      printf("Jeevitha");
  }
  else if(Name=='k'||Name=='K'){
      printf("Kowsalya");
  }
  else if(Name=='l'||Name=='L'){
      printf("Logitha");
  }
  else if(Name=='m'||Name=='M'){
      printf("Mathumitha");
  }
  else if(Name=='n'||Name=='N'){
      printf("Nanthini");
  }
  else{
      printf("No Added");
  }
}
 void main(){
 
 letter(getLetterFromUser());
}
