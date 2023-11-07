#include <stdio.h>
int main() {
    int tamanhoVetor = 10;
    int valores[tamanhoVetor];
    for (int i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &valores[i]);
    }
    printf("\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d", valores[i]);
        if (i < (tamanhoVetor - 1)) {
            printf(" ");
        }
    }
    printf("\n");
    do{
        tamanhoVetor--;
        int novosValores[tamanhoVetor];
        for(int i = 0; i < tamanhoVetor; i++){
            novosValores[i] = valores[i] + valores[i+1];
        }
        for (int i = 0; i < tamanhoVetor; i++) {
            printf("%d", novosValores[i]);
            if (i < (tamanhoVetor - 1)) {
                printf(" ");
            }
        }
        printf("\n");
        for(int i = 0; i < tamanhoVetor; i++){
            valores[i] = novosValores[i];
        }
    }while(tamanhoVetor > 1);
    printf("\n");
    return 0;
}