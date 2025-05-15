//biblioteca
#include <stdio.h>
#include <stdlib.h>

int main(){
//declaração das variáveis    
    int n, n2, menor;
    
//"printf" para ler 2 números e "scanf" para guardar    
    printf("Informe o primeiro número: ");
    scanf("%d", &n);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);

//para limpar o código
    system ("clear");
    
//conta para ver qual é maior ou menor e if else para dependendo do resultado mostrar alguma coisa
    menor = n2;
    if (n < menor){
        printf ("%d é maior\n", n2);
    }
    else {
        printf ("%d é maior\n", n);
    }
    return 0;
}