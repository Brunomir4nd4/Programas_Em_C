/* Inserindo qualquer inteiro será retornado seu equivalente em binário */

#include <stdio.h>

int main()
{
    unsigned long int dec, bin = 0, cont = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%li", &dec);
    
    while(dec > 0)
    {
        if (dec % 2 == 1)
        {
            bin += 1 * cont;
        }
        else if (dec == 1)
        {
            bin += 1 * cont;
        }
        
        dec /= 2;
        cont *= 10;
    }
    
    printf("O numero em binario e: %li", bin);
}
