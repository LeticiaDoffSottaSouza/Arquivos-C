//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    char nome[30];
    int idade;
    float nota;
} Aluno;

//inicio
int main(){

//declaração das variáveis 
    Aluno aluno;

//"printf" para pedir os dados, "scanf" para guardar e " %[^\n]" para guardar texto com espaço
    printf("Informe o nome: ");
    scanf(" %[^\n]", aluno.nome);
    printf("Informe a idade: ");
    scanf("%d", &aluno.idade);
    printf("Informe a nota: ");
    scanf("%f", &aluno.nota);
    
//limpando o programa
    system ("clear");
    
//exibindo os dados do aluno     
    printf("Dados do aluno:\nNome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f", aluno.nota);
    
//para encerrar o programa    
    return 0;
}