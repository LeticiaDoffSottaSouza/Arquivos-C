#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"


int main(){
    int opcao, contAluno = 0, contNota = 0;
    Aluno alunos[10];
    Nota notas[50];
    
    do{
    printf("---- Sistema escolar ----\n");
    printf("1- Cadastrar aluno\n");
    printf("2- Cadastrar nota\n");
    printf("3- Calcular média\n");
    printf("0- Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        cadastrarAluno(&alunos[contAluno], &contAluno);
        break;
        
        case 2:
        cadastrarNota(&notas[contNota], &contNota);
        break;
        
        case 3:
        calcularMedia(alunos, notas);
        break;
        
        case 0:
        system ("clear");
        printf("Saindo....");
        break;
        
        default:
        system ("clear");
        printf("Resposta inválida. Tente novamente\n\n");
        break;
    }
    } while (opcao != 0);

    return 0;
}

