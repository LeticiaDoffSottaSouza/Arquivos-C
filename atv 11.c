//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){
    
//declaração das variáveis    
    float n[10], media = 0;
    int i;
    
//laço de repetição para pegar os números ate chegar em 10
    for (i = 0; i < 10; i ++){
        
//"printf" para pedir os números, "scanf" para guardar e "&n[i]" para saber onde colocar o número
    printf("Informe o %d número: ", i + 1);
    scanf("%f", &n[i]);
    }

//para limpar o código
    system ("clear");

//conta para a média
    media = (n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9]) / 10;

//resultado
    printf("A média dos números informados é: %.2f", media);
    
//para encerrar o programa    
    return 0;
}