/* Digite um valor para o veículo e será retornado o valor atribuido a uma taxa 
de acordo com cada modo de pagamento a pagar */

#include <stdio.h>

int main()
{
    float valorInicio, valorFinal, valorParcela;
    int qtdParcelas;
    printf("Insira o valor do carro: ");
    scanf("%f", &valorInicio);
    
    
    printf("| 1ª    |    A vista     |\n");
    printf("| 2ª    |    6 parcelas  |\n");
    printf("| 3ª    |    12 parcelas |\n");
    printf("| 4ª    |    18 parcelas |\n");
    printf("| 5ª    |    24 parcelas |\n");
    printf("| 6ª    |    30 parcelas |\n");
    printf("| 7ª    |    36 parcelas |\n");
    printf("| 8ª    |    42 parcelas |\n");
    printf("| 9ª    |    48 parcelas |\n");
    printf("| 10ª   |    54 parcelas |\n");
    printf("| 11ª   |    60 parcelas |\n");
    printf("Insira a quantidade de parcelas desejadas: ");
    scanf("%1i", &qtdParcelas);
    
    
    
    switch(qtdParcelas){
        case 1:
           valorFinal = valorInicio * 0.80;
           break;
        case 2:
            valorFinal = valorInicio *1.03;
           break;
        case 3:
            valorFinal = valorInicio *1.06;
           break;
        case 4:
            valorFinal = valorInicio * 1.09;
           break;
        case 5:
            valorFinal = valorInicio *1.12;
           break;
        case 6:
            valorFinal = valorInicio *1.15;
           break;
        case 7:
            valorFinal = valorInicio *1.18;
           break;
        case 8:
            valorFinal = valorInicio *1.21;
           break;
        case 9:
            valorFinal = valorInicio *1.24;
           break;
        case 10:
            valorFinal = valorInicio *1.27;
           break;
        case 11:
            valorFinal = valorInicio *1.30;
           break;
    }
    
        printf("\nO valor final do Produto vai ser: %.2f", valorFinal);
    

    return 0;
}
