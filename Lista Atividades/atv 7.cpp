//biblioteca
#include <stdio.h>
#include <stdlib.h>

int main(){
//declaração das variáveis    
    int i, n, resp;
    
//"printf" para pedir o numero e "scanf" para guardar    
    printf("Informe um número para ver a tabuada (1-10): \n");
    scanf("%d", &n);
    
//limpando o programa
    system ("clear");
    
//laço de repetição para contar a tabuada
    for (i = 1; i <= 10; i ++){
 
//conta para a tabuada
    resp = n * i;
    
//resposta da tabuada    
    printf("%d X %d = %d\n", n, i, resp);
    }

//para encerrar o programa
    return 0;
}