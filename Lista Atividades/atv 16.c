//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    char nome[30];
    int quantidade;
    float preco;
} Produto;

//inicio
    int main(){

//declaração das variáveis 
    Produto produtos[5];
    float total = 0;
    int i;

//laço de repetição para 5 produtos
    for (i = 0; i < 5; i ++){
    
//"printf" para pedir os dados, "scanf" para guardar e " %[^\n]" para guardar texto com espaço
    printf("Informe o nome: ");
    scanf(" %[^\n]", produtos[i].nome);
    printf("Informe a quantidade: ");
    scanf("%d", &produtos[i].quantidade);
    printf("Informe o preço: ");
    scanf("%f", &produtos[i].preco);
    
//\n para dar espaço entre os produtos sem apagá-los
    printf("\n");
    }
    
//limpando o programa
    system ("clear");
    
//exibindo o total por produto     
    printf("Total por produto:\n");
    
//laço de repetição para falar de cada produto    
    for (int i = 0; i < 5; i++) { 
        
//conta para ver o valor total         
        total = produtos[i].preco * produtos[i].quantidade;
        
//resposta do valor         
        printf("Produto: %s\nTotal: R$%.2f\n", produtos[i].nome, total);
        
//\n para dar espaço entre os produtos sem apagá-los
    printf("\n");        
    }
    
//para encerrar o programa    
    return 0;
}