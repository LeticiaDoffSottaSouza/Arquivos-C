#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
   char nome[30];
   int idade;
   char cidade[30];
   int pessoas;
   int dias;
   int numero;
   char pagamento[20];
   float valor;
} Cadastro;

Cadastro cadastros[10];
int numCadastro = 0;

void finalizaFuncao();
void cadastroCliente();
void servicoQuarto();
void pedidos();
void pagamento();
void feedback();
void todosCadastros();

int main(){
    int opcao;
    do{
        printf("---- Hotel Paisagem ----\n");
        printf("1- Cadastro\n");
        printf("2- Serviço de Quarto\n");
        printf("3- Pedidos especiais\n");
        printf("4- Todos os cadastros\n");
        printf("5- Pagamento\n");
        printf("6- Feedback\n");
        printf("7- Sair\n");
        scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        cadastroCliente();
        break;
        
        case 2:
        servicoQuarto();
        break;
        
        case 3:
        pedidos();
        break;
        
        case 4:
        todosCadastros();
        break;
        
        case 5:
        pagamento();
        break;
        
        case 6:
        feedback();
        break;
        
        case 7:
        system ("clear");
        printf("Obrigado!\n");
        break;
                
        default:
        system ("clear");
        printf("Opção inválida!, tente novamente\n");
        break;
    }
    
    }while (opcao != 7);
    
    return 0;
}

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("clear");
}

void cadastroCliente(){
    system ("clear");
    printf("---- Cadastro ----\n");
    printf("Informe seu nome completo: ");
    scanf(" %[^\n]", cadastros[numCadastro].nome);
    printf("Informe sua idade: ");
    scanf("%d", &cadastros[numCadastro].idade);
    printf("Informe a cidade em que você mora: ");
    scanf(" %[^\n]", cadastros[numCadastro].cidade);
    printf("Informe quantas pessoas ficarão hospedadas: ");
    scanf("%d", &cadastros[numCadastro].pessoas);
    printf("Informe quantos dias pretende ficar hospedado: ");
    scanf("%d", &cadastros[numCadastro].dias);
    printf("Informe seu número de telefone: ");
    scanf("%d", &cadastros[numCadastro].numero);
    numCadastro++;
    finalizaFuncao();
}

void servicoQuarto(){
    int opcao = 0;
    system ("clear");
    printf("---- Serviço de Quarto ----\n");
    printf("1- Gostaria de solicitar!\n");
    printf("2- No momento não quero.\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("1- Trocar roupa de cama\n");
            printf("2- Limpar o banheiro\n");
            printf("3- Limpar o quarto\n");
            scanf("%d", &opcao);
            switch(opcao){
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
                break;
            }
            break;
        
        case 2:
        printf("Iremos em breve\n");
        break;
        
        default:
        printf("Opção inválida.\n");
    }
    finalizaFuncao();
}

void pedidos(){
    int opcao;
    char pedido;
    system ("clear");
    printf("---- Pedidos Especiais ----\n");
    printf("Gostaria de fazer algum pedido específico?:\n");
    printf("1- Sim\n");
    printf("2- Não\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("O que gostaria de pedir?\n");
            scanf(" %[^\n]", &pedido);
            printf("Seu pedido será feito em breve!\n");
            break;
            
        case 2: 
            printf("Ok :)");
            break;
        
        default:
        printf("Opção inválida.\n");
    }
    finalizaFuncao();
}

void todosCadastros(){
    system ("clear");
    printf("---- Todos os Cadastros ----\n");
    for (int i = 0; i < numCadastro; i ++){
        printf("ID: %d\n", i+1);
        printf("Nome completo: %s\n",cadastros[i].nome);
        printf("Idade: %d\n", cadastros[i].idade);
        printf("Cidade: %s\n", cadastros[i].cidade);
        printf("Pessoas hospedadas: %d\n", cadastros[i].pessoas);
        printf("Dias: %d\n", cadastros[i].dias);
        printf("Número de telefone: %d\n", cadastros[i].numero);
        printf("-----------------------------------------\n");
    }    
    finalizaFuncao();
}

void pagamento(){
    int codigo = 0;
    printf("ID: ");
    scanf("%d", &codigo);
    cadastros[codigo-1].valor = cadastros[codigo-1].dias * 350.00;
    printf("O valor de sua hospedagem é de: %.2f \n", cadastros[codigo-1].valor);
    printf("Informe a forma de pagamento: ");
    scanf(" %[^\n]", cadastros[codigo-1].pagamento);
    finalizaFuncao();
}

void feedback(){
    int avaliacao;
    char comentario[80];
    system ("clear");
    printf("---- Feedback ----\n");
    printf("Avalie de 1 a 5 o grau de satistação do nosso serviço: ");
    scanf("%d", &avaliacao);
    printf("Faça um comentário: ");
    scanf(" %[^\n]", comentario);
    finalizaFuncao();
}
