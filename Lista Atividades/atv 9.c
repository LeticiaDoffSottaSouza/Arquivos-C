//biblioteca
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){

//declaração das variáveis	
    float n, n2, resp;
    int opcao;
    
//estrutura de repetição até que selecione "sair"
    do{
   
//"printf" para mostrar as opções e "scanf" para ler
    printf("Escolha uma opção:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Sair\n");
    scanf("%d", &opcao);
    
//para limpar o programa
    system("clear");

//estrutura de escolha com resultado para cada opção acima
    switch (opcao){
        case 1:
        printf("Você escolheu Somar!\n");
        printf("Informe dois números:\n");
        scanf("%f %f", &n, &n2);
        resp = n + n2;
        printf("Resultado: %.2f\n", resp);
        break;
       
        case 2:
        printf("Você escolheu Subtrair!\n");
        printf("Informe dois números:\n");
        scanf("%f %f", &n, &n2);
        resp = n - n2;
        printf("Resultado: %.2f\n", resp);
        break;
        
//mensagem para quando a pessoa escolher sair e limpando o programa
        case 3:
        system("clear");
        printf("Programa encerrando...");        
        break;
        
       
//caso o usuario selecione uma opção inválida
        default:
        printf("Opção inválida, tente novamente.\n");
        return 1;
    }
    
//encerrando a estrutura de repetição
    } while (opcao != 3);
   
//para encerrar o programa
    return 0;
}