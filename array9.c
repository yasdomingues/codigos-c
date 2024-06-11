#include <stdio.h>
    int main() {
        int numeros[] = {100, 2450, 35, 48, 58, 6, 7, 40, 9, 10}; // simplifica as variaveis
        int maior = numeros[0];

    for (int i = 1; i < 10; i++)  {
        if (numero [i] < menor) { //vai verificando pelo indice o maior numero
        menor = numeros[i];
        }
    }

    printf("o menor numero eh: %d\n", menor);// exibe qual elemento do array deve exibir

    return 0;
}
