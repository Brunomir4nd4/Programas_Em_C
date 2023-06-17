/* Os números digitados serão analizados se estão estiverem em ordem cercente ou não */

#include <stdio.h>
int main()
{
    int num, quantNum, numAnt, ordem = 1, enumerador=2;
    
    printf("Digite a quantidade de números que vão ser lidos: ");
    scanf("%d", &quantNum);
    
    printf("Digite o 1ª número: ");
    scanf("%d", &num);
    numAnt = num;
    
    for (int i=2; i<=quantNum; i++){
        printf("Digite o %iª número: ", enumerador); enumerador++;
        scanf("%d", &num);
        
        if(num < numAnt){
            ordem = 0;
        }
        numAnt = num;
    }
    
     if(ordem == 1){
      printf("Estão em ordem crescente");
    }
    else{
        printf("Não estão em ordem crescente");
    }
        
    return 0;
}
