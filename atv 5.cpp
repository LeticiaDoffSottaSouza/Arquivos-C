//biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){

//declaração das variáveis	
    float n, n2, resp;
    int opcao;
   
//"printf" para mostrar as opções e "scanf" para ler
    printf("Escolha uma operação:\n");
    printf("1- Adição\n");
    printf("2- Subtração\n");
    printf("3- Divisão\n");
    printf("4- Multiplicação\n");
    scanf("%d", &opcao);
    
//para limpar o programa
    system("clear");
    
//"printf" para pedir dois números e "scanf" para ler
    printf("Informe dois numeros:\n");
    scanf("%f %f", &n, &n2);
    
//para limpar o programa
    system("clear");
   
//estrutura de escolha com resultado para cada opção acima
    switch (opcao){
        case 1:
        printf("Você escolheu Adição!\n");
        resp = n + n2;
        printf("Resultado: %.2f\n", resp);
        break;
       
        case 2:
        printf("Você escolheu Subtração!\n");
        resp = n - n2;
        printf("Resultado: %.2f\n", resp);
        break;
       
        case 3:
        printf("Você escolheu Divisão!\n");
        resp = n / n2;
        printf("Resultado: %.2f\n", resp);
        break;
       
        case 4:
        printf("Você escolheu Multiplicação!\n");
        resp = n * n2;
        printf("Resultado: %.2f\n", resp);
        break;
       
//caso o usuario selecione uma opção inválida
        default:
        printf("Opção inválida, tente novamente.\n");
        return 1;
    }
   
//para encerrar o programa
    return 0;
}
