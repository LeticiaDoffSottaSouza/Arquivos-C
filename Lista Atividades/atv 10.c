//biblioteca
#include <stdio.h>
#include <stdlib.h>

///inicio
    int main(){
    
//declaração das variáveis    
    int i, n, nInformado;

//"printf" para pedir o número e "scanf" para guardar
    printf("Informe um número: ");
    scanf("%d", &n);
    
//para guardar separadamente o número que o usuário informar    
    nInformado = n;
   
//laço de repetiçao para fazer o fatorial    
    for (i = n - 1; i > 0; i--){
        n *= i;
    }
   
//para limpar o programa   
    system("clear");
  
//"printf" para dar a resposta
    printf("O fatorial de %d é: %d", nInformado, n);
   
//para encerrar o programa
    return 0;
    }