//biblioteca
#include <stdio.h>
#include <locale.h>
//inicio
int main (){
    setlocale(LC_ALL,"");
    char nome[20], sobrenome[20], cidade[20], pagamento[20], pedido[60];  
    int idade, pessoas, numero, dias, opcao1, opcao2, opcao3;
    float valor;
    printf("Bem-vindo ao hotel Alika!\n");
    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe a cidade em que você mora: ");
    scanf("%s", cidade);
    printf("Informe quantas pessoas ficarão hospedadas contando com você: ");
    scanf("%d", &pessoas);
    printf("Informe quantos dias pretende ficar hospedado: ");
    scanf("%d", &dias);
    printf("Informe seu número de telefone: ");
    scanf("%d", &numero);
    valor = dias * 350.00;
    printf("O valor de sua hospedagem é de: %.2f \n", valor);
    printf("Informe a forma de pagamento: ");
    scanf("%s", pagamento);
    do{
    printf("Selecione uma das opções:\n");
    printf("1- Gostaria de solicitar o seviço de quarto!\n");
    printf("2- No momento não quero solicitar o serviço de quarto.\n");
    scanf("%d", &opcao1);
    switch(opcao1){
        case 1:
        printf("1- Trocar roupa de cama\n");
        printf("2- Limpar o banheiro\n");
        printf("3- Limpar o quarto\n");
        scanf("%d", &opcao2);
        switch(opcao2){
            case 1:
            printf("Seu pedido será feito em breve!\n");
            break;
            case 2:
            printf("Seu pedido será feito em breve!\n");
            break;
            case 3:
            printf("Seu pedido será feito em breve!\n");
            break;
            default:
            printf("Opção inválida.\n");
        }
        break;
        
        case 2:
        printf("Ok :)\n");
        break;
        
        default:
        printf("Opção inválida.\n");
    }
    printf("Gostaria de fazer algum pedido específico?:\n");
    printf("1- Sim\n");
    printf("2- Não\n");
    printf("3- Sair\n");
    scanf("%d", &opcao3);
    switch(opcao3){
        case 1:
            printf("O que gostaria de pedir?\n");
            scanf("%s", pedido);
            printf("Seu pedido será feito em breve!\n");
            break;
        case 2: 
            printf("Ok :) ");
            break;
        case 3:
        printf("Saindo...\n");
        break;
        
        default:
        printf("Opção inválida.\n");
    } 
    }while (opcao3 == 3);
    return 0;
}