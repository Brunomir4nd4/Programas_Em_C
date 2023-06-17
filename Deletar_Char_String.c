/* Digite uma string e o que deseja exluir dela */

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    int e;
    char s1[MAX], s2[MAX]; 
    
    
    printf("Insira o texto: ");
    scanf("%[^\n]", s1);
while (1){
    
    printf("Insira o que deseja excluir: ");
    scanf("%*c%[^\n]", s2);
    
    if(strcmp(s2, "sair") == 0){
        break;
    }
    
    for(int j=0; j < strlen(s2); j++){
        for(int i=0; i < strlen(s1); i++){
            if(s1[i] == s2[j]){
                for( e = i; e < strlen(s1) - 1; e++){
                    s1[e] = s1[e + 1];
                }
                s1[e] = '\0';
            }
        }
    }
    printf("\n%s\n", s1);
}  
    

    return 0;
}
