#include <stdlib.h>
#include <stdio.h>

#include "alunos.h"
#include "notas.h"

void cadastrarNota(Nota *nota, int *conta){
    system ("clear");
    printf("---- Cadastrar nota ----\n");
    printf("Informe a matricula do aluno: ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota: ");
    scanf("%f", &nota->nota);
    *conta = *conta +1; 
    finalizaFuncao();
}

void calcularMedia(Aluno alunos[], Nota notas[]){
    int matricula, qntNotas = 0;
    float media = 0;
    system ("clear");
    printf("Informe uma matricula: ");
    scanf("%d", &matricula);
    for (int i = 0; i < 10; i ++){
        if (alunos[i].matricula == matricula){
            printf("Nome: %s\n", alunos[i].nome);
            break;
        }
    }
    for (int i = 0; i < 50; i ++){
        if (notas[i].matricula == matricula){
            media += notas[i].nota;
            qntNotas++;
        }
    }
    printf("Média: %.2f\n", (media / qntNotas));
    finalizaFuncao();
}