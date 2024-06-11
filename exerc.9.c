#include <stdio.h>

int main(){
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float soma, media;

    for(int i = 0; i < 10; i++){
        soma = soma+num[i];
        }
        media = soma/10;
        printf("media %.1f\n", media);
}


