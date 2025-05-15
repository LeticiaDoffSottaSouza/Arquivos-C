//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    char nome[30];
    int idade;
} Pessoa;

//inicio
    int main(){

//declaração das variáveis 
    Pessoa pessoas[2];
    int i;

//laço de repetição para 2 pessoas
    for (i = 0; i < 2; i ++){
    
//"printf" para pedir os dados, "scanf" para guardar e " %[^\n]" para guardar texto com espaço
    printf("Informe o nome: ");
    scanf(" %[^\n]", pessoas[i].nome);
    printf("Informe a idade: ");
    scanf("%d", &pessoas[i].idade);
    
//\n para dar espaço entre os pessoas sem apagá-las
    printf("\n");
    }
    
//limpando o programa
    system ("clear");
    
//if else para dependendo da verificação ser verdadeira mostrar uma resposta
    if (pessoas[0].idade > pessoas[1].idade){
    printf("%s é mais velho(a) que %s\n", pessoas[0].nome, pessoas[1].nome);
    } 
    else if (pessoas[0].idade < pessoas[1].idade){
    printf("%s é mais velho(a) que %s\n", pessoas[1].nome, pessoas[0].nome);
    }
    else {
    printf("%s e %s têm a mesma idade\n", pessoas[0].nome, pessoas[1].nome);
    }
    
//para encerrar o programa    
    return 0;
}