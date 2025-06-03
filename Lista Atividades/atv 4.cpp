//biblioteca
#include <stdio.h>
#include <stdlib.h>

int main(){
//declaração das variáveis    
    int idade;
    
//"printf" para ler a iddae e "scanf" para guardar    
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    
//para limpar o programa
    system("clear");    
    
//if else para ver em qual caso cai a idade da pessoa
    if (idade >= 16 && idade < 18 || idade >= 70){
        printf ("Voto opcional!\n");
    }
    else if (idade < 16){
        printf ("Você não pode votar!\n");
    } 
    else {
        printf("Seu voto é obrigatório!\n");
    }
    return 0;
}