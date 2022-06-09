#include <stdio.h>
#include <string.h>


struct carro
{
    char dono[100];
    char modelo[100];
    char cor[100];
    char placa[100];
    int ano;
};

void opcoes()
{
    printf("Selecione uma das opcoes abaixo: \n");
    printf("1 - Cadastrar um automovel\n");
    printf("0 - Sair do programa\n");
}


int main()
{
    // definir a quantidade de carros para cadastrar
    int opcao;
    char resposta[100];
    int count = 1;
    struct carro c;

    opcoes();
    scanf("%d", &opcao);

    while (opcao != 0){

            printf("Informe o nome do dono do Automóvel numero \n");
            scanf(" %[^\n]", c.dono);

            printf("Informe o modelo do carro \n");
            scanf(" %[^\n]", c.modelo);

            printf("Informe a cor do automóvel\n");
            scanf(" %[^\n]", c.cor);

            printf("Informe a placa do veículo\n");
            scanf(" %[^\n]", c.placa);

            printf("Informe o ano de fabricacao do automóvel\n");
            scanf("%d", &c.ano);

            printf("\n");

            printf("### AUTOMOVEL %d CADASTRADO ###\n", count);
            printf("Dono: %s\n", c.dono);
            printf("Modelo: %s\n", c.modelo);
            printf("Cor: %s\n", c.cor);
            printf("Placa: %s\n", c.placa);
            printf("Placa: %d\n", c.ano);

            printf("--------------------------------------\n");
            count++;

            opcoes();
            scanf("%d", &opcao);
    }
    
    

    
    

    
    return 0;
}
