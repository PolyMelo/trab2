#include <stdio.h>
#include <string.h>

main() {
    char nome_time1[31], nome_time2[31];
    char jogador[31], posicao;
    int forca, i;
    float forca_time1 = 0, forca_time2 = 0;
    
    
    scanf("%30[^\n]% ", nome_time1);
    
    
    for (int i = 0; i < 11; i++) {
        scanf("%30[^;];%c;%d%*c", jogador, &posicao, &forca);
        if (posicao == 'G') {
            forca_time1 += 8 * forca;
        } else if (posicao == 'L') {
            forca_time1 += 10 * forca;
        } else if (posicao == 'Z') {
            forca_time1 += 5 * forca;
        } else if (posicao == 'V') {
            forca_time1 += 8 * forca;
        } else if (posicao == 'M') {
            forca_time1 += 11 * forca;
        } else if (posicao == 'A') {
            forca_time1 += 12 * forca;
        }
    }
    
    
    scanf("%30[^\n]%*c", nome_time2);
    
    
    for (int i = 0; i < 11; i++) {
        scanf("%30[^;];%c;%d%*c", jogador, &posicao, &forca);
        if (posicao == 'G') {
            forca_time2 += 8 * forca;
        } else if (posicao == 'L') {
            forca_time2 += 10 * forca;
        } else if (posicao == 'Z') {
            forca_time2 += 5 * forca;
        } else if (posicao == 'V') {
            forca_time2 += 8 * forca;
        } else if (posicao == 'M') {
            forca_time2 += 11 * forca;
        } else if (posicao == 'A') {
            forca_time2 += 12 * forca;
        }
    }
    
    
    printf("Time 1 - %s: %.2f\n", nome_time1, forca_time1 / 100);
    printf("Time 2 - %s: %.2f\n", nome_time2, forca_time2 / 100);
    
    
    if (forca_time1 > forca_time2) {
        printf("Time 1 é o mais forte\n");
    } else if (forca_time2 > forca_time1) {
        printf("Time 2 é o mais forte\n");
    } else {
        printf("Os times têm a mesma força\n");
    }
    
    return 0;
}
