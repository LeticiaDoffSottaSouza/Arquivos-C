//biblioteca
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){
    
//declaração das variáveis
    float n, n2, media = 0;
    
//pedindo as notas com "printf" e "scanf" para ler
    printf("Informe as notas de um aluno:\n");
    scanf("%f %f", &n, &n2);
    
//conta para a media
    media = (n + n2) / 2;
    
//para limpar o código
    system ("clear");
    
//if else para dependendo do resultado exibir uma resposta
    if (media >= 7.0){
        printf("Aprovado! :)\n");
    }
    else{
        printf("Reprovado! :(\n");
    }
    return 0;
}