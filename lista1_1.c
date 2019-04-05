#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bruno Henrique Dias Gaya - 0030481823049
//Victor Yuzo Nishiyama Ferreira da Costa - 0030481713010
int main()
{
    int valorK = 1;
    //declaram apenas para ser diferente de 0

    while(valorK != 0){

    char frase[100] = "";

    printf("\nEscreva sua frase: ");
    gets(frase);
    fflush(stdin);

    int tamanhoFrase = strlen(frase);

    printf("\nEscreva o valor da constante K: ");
    scanf("%i", &valorK);
    fflush(stdin);

    strupr(frase);
    int cont;


    for(cont = 0; cont< tamanhoFrase; cont++){
        if(frase[cont] == 32){
            frase[cont] = 32; //espaço
           }

        if(frase[cont] + valorK > 90){ //se a letra + o K for maior que 90 "voltar"
            frase[cont] = frase[cont] + valorK - 29;
        }

        if(frase[cont] != 32 && frase[cont] + valorK <= 90){ 
            frase[cont] = frase[cont] + valorK;
        }
    }

    if(valorK != 0){
        printf("%s\n\n", frase);
    }else{
        printf("Fim do programa !!\n");
    }
    }
}
