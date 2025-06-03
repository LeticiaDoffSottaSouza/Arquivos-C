#ifndef ALUNOS_H //nome de arquivo
#define ALUNOS_H

typedef struct{
    int matricula;
    char nome[100];
} Aluno;


void cadastrarAluno(Aluno *aluno, int *conta);
void finalizaFuncao();


#endif
