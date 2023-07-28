
#include <stdio.h>
#include <string.h>

int main()
{
    // função strcpy
    char nome[50] = "Joaquim Silva";
    char nome2[50];
    
    printf("\n\n antes da copia do strcpy: \n\nnome: %s \nnome2: %s\n\n", nome, nome2);
    
    //strcpy(nome2, "Joaquim Silva");
    strcpy(nome2, nome);
    
    printf("Nome depois da copia do strcpy: \n\nnome: %s \nnome2: %s", nome, nome2);
    

    //função strcat
    int i, c;
    char st1[100] = "Oi";
    char st2[100] = "tos";

    printf("\n\nAntes da função strcat:\n\n%s Com Tamanho = %ld", st1, strlen(st1));
    
     /*
    for (i=0; ; i++){
        if(s1[i] == '\0'){  
            break;
        }
    }
    */
    for (i=0; st1[i] != '\0'; i++); //Forma equivalente de descobrir o tamanho da string
    
    for(c=0; st2[c] != '\0'; c++){ // Acha o indice final da string st1
        st1[i+c] = '\0';
    }
    
    strcat(st1, st2);
    
    printf("\n\nDepois da função strcat:\n\n%s Com Tamanho = %ld", st1, strlen(st1));
    
    return 0;
}
