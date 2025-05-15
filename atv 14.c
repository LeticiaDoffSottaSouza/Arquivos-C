//biblioteca
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){
    
//declaracão de variavel
    int n[5], i;
    
//laço de repetição para pedir os números    
    for (i = 0; i < 5; i++) { 
        
//"printf" para pedir os números, "scanf" para guardar e "i + 1" para ir aumentando o número de 1 em 1
        printf("Informe o %d número: ", i + 1);
        scanf("%d", &n[i]); 
    }
    
//para limpar o código
    system ("clear");    
    
//laço de repetição para falar os números invertidos
    printf("Números invertidos:\n");
    for (i = 4;i>=0;i--){
        printf ("%d\n", n[i]);
        } 

//para encerrar o programa
    return 0;
}
