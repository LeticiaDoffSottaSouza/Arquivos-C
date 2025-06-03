//biblioteca
#include <stdio.h>

int main(){
//declaração das variáveis    
    int i, soma = 0;

//laço de repetição
    for (i = 1; i <= 100; i ++){
    soma += 2 * i;
}
//resultado
    printf("A soma dos 100 primeiros números pares é: %d", soma);
    
//para encerrar o programa    
    return 0;
}