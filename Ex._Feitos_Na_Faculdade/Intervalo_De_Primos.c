/* Dado um limite superior e inferior ira retornar todos os números primos entre eles */

#include <stdio.h>

int main()
{
    int i, contador, limInf, limSup;
    
    printf("Escreva o limite inferior: ");
    scanf("%i", &limInf);
    
    printf("Escreva o limite superior: ");
    scanf("%i", &limSup);
    
    for (i=limInf; i<=limSup; i++){
        
        for(int j=1; j<=limSup; j++ ){
            
            if(i % j == 0){
                contador++;
            }
            
        }
        
        if(contador == 2){
            printf("%i ", i);
        }
        
        contador = 0;
    }

}
