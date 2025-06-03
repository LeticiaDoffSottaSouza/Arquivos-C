//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    char nome[30];
    float notas[3];
} Aluno;

//inicio
    int main(){

//declaração das variáveis 
    Aluno aluno;
    float media = 0.0;
    int i;
    
//"printf" para pedir os dados, "scanf" para guardar e " %[^\n]" para guardar texto com espaço
    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);
    
//laço de repetição para 3 notas
    for (i = 0; i < 3; i ++){
        printf("Informe a %d nota: ", i + 1);
        scanf("%f", &aluno.notas[i]);
    }
    
//limpando o programa
    system ("clear");
 
//calculando a média das notas    
    media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2]) / 3.0;    
    
//resposta
    printf("BOLETIM\n");
    printf("Aluno: %s\n", aluno.nome);
    printf("Média: %.2f\n", media);
    
//if else para dependendo da verificação ser verdadeira mostrar uma resposta
    if (media >= 7.0) {
        printf("Resultado: Aprovado! :)\n");
    } else {
        printf("Resultado: Reprovado! :(\n");
    }
    
//para encerrar o programa    
    return 0;
}