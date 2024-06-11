#include <stdio.h>

int main(){
    float temp[] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};
    float soma, media;

    for(int i = 0; i < 10; i++){
        soma = soma+temp[i];
        }
        media = soma/7;
        printf("media de temperatuda: %.2f\n", media);
}


