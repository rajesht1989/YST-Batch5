// write a program to print hallowed star square
#include <stdio.h>

int main() {
printSquare(10);
    return 0;
}

void printSquare(int n) {
    for (int i = 0; i < n; i++ ) {
    for (int j = 0; j < n; j++ ) {
        if (i == 0 || j == 0 || i == n -1 || j == n - 1 || i == 1 || j == 1 || i == n - 2 || j == n - 2){
            printf("*\t");
        } else {
            printf("\t");
        }
        //  printf("%d,%d ",i,j);
    }
            printf("\n");
    }
}
