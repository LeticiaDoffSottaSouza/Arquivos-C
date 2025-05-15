//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    char nome[30];
    float mediaFinal;
} Aluno;

//inicio
    int main(){

//declaração das variáveis 
    Aluno alunos[5];
    int i;
    float mediaGeral;
    
//laço de repetição para 5 alunos
    for (i = 0; i < 5; i ++){
        
//"printf" para pedir os dados, "scanf" para guardar e " %[^\n]" para guardar texto com espaço
        printf("Dados do %d aluno\n", i + 1);
        printf("Informe o nome: ");
        scanf(" %[^\n]s", alunos[i].nome);  
        printf("Informe a média final: ");
        scanf("%f", &alunos[i].mediaFinal);
        
//soma das medias de cada aulo e dividindo pela quantidade deles        
        mediaGeral += alunos[i].mediaFinal / 5;
        
//\n para dar espaço entre os alunos sem apagá-los
        printf("\n");        
    }
    
//limpando o programa
    system ("clear");

//resposta
    printf("A média geral da turma é: %.2f\n", mediaGeral);
    
//para encerrar o programa    
    return 0;
}