//write a program to get a number from 1 to 10 and print it in text on console
#include<stdio.h>
char getALetterFromUser(){
    char a;
    printf("Enter A Letter To See A Doli's Name : ");
    scanf("%c",&a);
    return a;
}
void name(char a){
    if(a=='a'||a=='A'){
     printf("Asitha");
    }
    else if (a=='b'||a=='B'){
        printf("Banumathi");
    }
    else if (a=='c'||a=='C'){
        printf("Chithra");
    }
    else if (a=='d'||a=='D'){
        printf("Deepika");
    }
    else if (a=='e'||a=='E'){
        printf("Elizabeth");
    }
    else if (a=='f'||a=='F'){
        printf("Fathima");
    }
    else if (a=='g'||a=='G'){
        printf("Geetha");
    }
    else if (a=='h'||a=='H'){
        printf("Hema");
    }
    else if(a=='i'||a=='I'){
        printf("Iswarya");
    }
    else if(a=='j'||a=='J'){
        printf("Jeni");
    }
    else if(a=='k'||a=='K'){
        printf("Keerthi");
    }
     else if(a=='l'||a=='L'){
        printf("Leena");
    }
    else if(a=='m'||a=='M'){
        printf("Monica");
    }
    else if(a=='n'||a=='N'){
    printf("Nayanthara");
    }
    else if(a=='o'||a=='O'){
        printf("Oviya");
    }
    else if(a=='p'||a=='P'){
        printf("Priya");
    }
    else if(a=='q'||a=='Q'){
        printf("Queen");
    }
    else if(a=='r'||a=='R'){
        printf("Rithu");
    }
    else if(a=='s'||a=='S'){
        printf("Sherin");
    }
    else if(a=='t'||a=='T'){
        printf("Teena");
    }
    else if(a=='u'||a=='U'){
        printf("Usha");
    }
    else if(a=='v'||a=='V'){
        printf("Venu");
    }
    else if(a=='w'||a=='W'){
        printf("Witch");
    }
    else if(a=='x'||a=='X'){
        printf("Xavier");
    }
    else if(a=='y'||a=='Y'){
        printf("Yamini");
    }
    else if(a=='z'||a=='Z'){
        printf("Zendaya");
    }
    else{
        printf("Letter mattum kudupa thambi (｡•́︿•̀｡)");
    }
}
void main(){
     int b=getALetterFromUser();
     name(b);
}
