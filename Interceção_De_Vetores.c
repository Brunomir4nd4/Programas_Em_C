/* Irá mostrar dois vetores 'A' e 'B' e sua interceção em 'I' */

#include <stdio.h>

int main()
{
    int i, j, k;
    int vetorA[5], vetorB[5], vetorI[5];
    
    printf("Digite os valores para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetorA[i]);
    }
    
    printf("Digite os valores para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetorB[i]);
    }
    
    k = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (vetorA[i] == vetorB[j]) {
                int repetido = 0;
                for (int m = 0; m < 5; m++) {
                    if (vetorA[i] == vetorI[m]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    vetorI[k] = vetorA[i];
                    k++;
                }
                break;
            }
        }
    }
    

    printf("Vetor A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");
    
    printf("Vetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");
    
    printf("Vetor I (intersecção): ");
    for (i = 0; i < k; i++) {
        printf("%d ", vetorI[i]);
    }
    printf("\n");
    
    return 0;
}
