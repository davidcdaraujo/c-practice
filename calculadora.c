#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int c; //escolha
    int cal;

    printf("1 - adição\n2 - subtração\n3 - multiplicação\n4 - divisão\nEscolha: ");
    scanf("%d", &c);

    printf("Primeiro número: \n");
    scanf("%d", &a);
    printf("Segundo número: \n");
    scanf("%d", &b);

    switch(c){
        case 1:
            cal = a + b;
            printf("resultado: %d\n", cal);
            break;
        case 2:
            cal = a - b;
            printf("resultado: %d\n", cal);
            break;
        case 3:
            cal = a * b;
            printf("resultado: %d\n", cal);
            break;
        case 4:
            cal = a / b;
            printf("resultado: %d\n", cal);
            break;
    }

    return 0;

}