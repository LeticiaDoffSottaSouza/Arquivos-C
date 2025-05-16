//biblioteca
#include <stdio.h>
#include <stdlib.h>

//montagem de estrutura do struct para a variável
typedef struct{
    int ra;  //com o nome não deu certo
    int idade;
    float nota;
} Aluno;

//inicio
    int main(){

//declaração das variáveis 
    Aluno alunos[3];
    int i, raBusca, encontrou = 0;
    
//laço de repetição para pedir o ra de 3 alunos
    for (i = 0; i < 3; i ++){
        
//"printf" para pedir os dados e "scanf" para guardar 
        printf("Dados do %d aluno\n", i + 1);
        printf("Informe o ra(registro do aluno): ");
        scanf("%d", &alunos[i].ra);
        printf("Informe a idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Informe a nota: ");
        scanf("%f", &alunos[i].nota);
        
//\n para dar espaço entre os alunos sem apagá-los
        printf("\n");        
    }
    
//limpando o programa
    system ("clear");

//busca do aluno
    printf("Informe o ra(registro do aluno) que deseja buscar: ");
    scanf("%d", &raBusca);
    
//laço de repetição para olhar o ra dos 3 alunos informados anteriormente
     for (i = 0; i < 3; i++) {
    
//if para dependendo da verificação ser verdadeira mostrar uma resposta
        if (alunos[i].ra == raBusca) {
            printf("Aluno encontrado:\n");
            
//se encontrado mostrar os dados do aluno            
            printf("Registro do aluno: %d\n", alunos[i].ra);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrou = 1;
            break;
        }
    }

//limpando o programa
    system ("clear");
    
//if para caso não encontre o aluno pelo ra
    if (encontrou == 0) {
        printf("Aluno não encontrado.\n");
    }
    
//para encerrar o programa    
    return 0;
}
