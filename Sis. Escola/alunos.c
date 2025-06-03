#include <stdlib.h>
#include <stdio.h>

#include "alunos.h"



void cadastrarAluno(Aluno *aluno, int *conta){
    system ("clear");
    printf("---- Cadastrar aluno ----\n");
    printf("Informe a matricula: ");
    scanf("%d", &aluno->matricula);
    printf("Informe o nome: ");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1; //++ não funciona para ponteiro
    finalizaFuncao();
}



void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("clear");
}