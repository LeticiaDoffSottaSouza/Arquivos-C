//biblioteca
#include <stdio.h>

//inicio
int main(){

//declaração das variáveis    
    int n;

//"printf" para pedir o número e "scanf" para ler
    printf("Informe um número: ");
    scanf("%d", &n);
    
//if else para ver se é ímpar ou para
    if (n % 2 != 0){
        printf("Esse número é ímpar!\n");
    }
    else {
        printf("Esse número é par!\n");
    }
    
//para encerrar o programa    
    return 0;
}