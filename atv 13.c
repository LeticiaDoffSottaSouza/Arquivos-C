//biblioteca
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){
    
//declaracão de variavel
    int n[10], i, pares = 0;
    
//laço de repetição para pedir os números    
    for (i = 0; i < 10; i++) { 
        
//"printf" para pedir os números, "scanf" para guardar e "i + 1" para ir aumentando o número de 1 em 1
        printf("Informe o %d número: ", i + 1);
        scanf("%d", &n[i]); 
        
//if para ver se os números são par        
        if (n[i] % 2 == 0){ 
            
//acrescenta numeros pares na resposta            
            pares++; 
        }
    }
    
//para limpar o código
    system ("clear");    
    
//resposta
    printf("A quantidade de números pares é: %d\n", pares); 

//para encerrar o programa
    return 0;
}
