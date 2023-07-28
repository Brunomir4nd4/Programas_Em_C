#include <stdio.h>
int main()
{

    int i, n, contador;
    // Aqui você vai digitar um número e o código vai devolver se é primo ou não
    printf("Escreva um número: ");
    scanf("%i", &n);
    
    for(i=1; i<=n; i++){
        if(n % i == 0){
            contador++;
            j++;
        }
        if(contador==3){
            break;
        }
    }
    
    if (contador == 2){
        printf ("Número é primo");
        printf("\nNúmero de divisores é 2");
    }
    else{
        printf("Número não é primo");
        printf("\nNúmero de divisores é maior que 2");
    }
}
