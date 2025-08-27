#include<stdio.h>

int main (){

    int t = 1, b = 1; //declarei as variáveis da torre e do bispo

    printf("\nTorre.\n");
    do {
        printf("Direita\n");
        t++;
    } while (t <= 5);

    printf("\nBispo.\n");
    while (b <= 5){
        printf("Cima Direita\n");
        b++;
    }

    printf("\nRainha.\n"); //a variável da rainha declarei dentro do "for"
    for (int r = 1; r <= 8; r++){
        printf("Esquerda\n");
    }
    
    return 0;
}
