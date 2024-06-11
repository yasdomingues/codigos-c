#include <stdio.h>
    int main() {
        int numeros[] = {100, 2000, 35, 48, 58, 6, 7, 40, 9, 10, 234}; // simplifica as variaveis
        int soma = numeros[1];

    for (int i = 0; i < 10; i++)  {
        if (numeros [i] > soma) { //vai verificando pelo indice o maior numero
        soma = numeros[i];
        }
    }

    printf("a soma dos numeros eh: %d\n", soma);// exibe qual elemento do array deve exibir

    return 0;
}
