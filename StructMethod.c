// write a program to mimic the type behavior.(struct)
#include<stdio.h>
typedef struct{
    char a,b;
    char o;
}
vanmamaruha;
void main(){
    vanmamaruha v;
    v.a=5;
    v.b=5;
    v.o='+';
    printf("%d%d%c",v.a,v.b,v.o);
}
