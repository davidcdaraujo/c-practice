#include <stdio.h>

int main(){

    int o;
    int i;
    int fat = 1;

    printf("Escolha a fatorial de 1 à 10: ");
    scanf("%d", &o);

    for(i = 1; i <= o; i++){
        fat *= i;
        printf("%d\n", fat);
    }
    return 0;
}