#include <stdio.h>
int main() {
    int tamanhoVetor = 10;
    int valores[tamanhoVetor];
    int i;
    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &valores[i]);
    }
    for (i = 0; i < tamanhoVetor; i++) {
        printf("%d", valores[i]);
        if (i < (tamanhoVetor - 1)) {
            printf(" ");
        }
    }
    printf("\n");
    do{
        tamanhoVetor--;
        int novosValores[tamanhoVetor];
        for(i = 0; i < tamanhoVetor; i++){
            novosValores[i] = valores[i] + valores[i+1];
        }
        for (i = 0; i < tamanhoVetor; i++) {
            printf("%d", novosValores[i]);
            if (i < (tamanhoVetor - 1)) {
                printf(" ");
            }
        }
        printf("\n");
        for(i = 0; i < tamanhoVetor; i++){
            valores[i] = novosValores[i];
        }
    }while(tamanhoVetor > 1);
    return 0;
}
