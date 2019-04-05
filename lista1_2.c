#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bruno Henrique Dias Gaya - 0030481823049
//Victor Yuzo Nishiyama Ferreira da Costa - 0030481713010
int main()
{
    char ISBN[11] = "";

    while (strcmp(ISBN,"FIM") != 0){


    printf("\nDigite o valor do ISBN: ");
    gets(ISBN);
    fflush(stdin);

	if(ISBN[10] == 'x'){
		printf("ISBN INVALIDO x minusculo \n \n");
		continue;
	}

	strupr(ISBN);

    if(strcmp(ISBN,"FIM") == 0){
        break;
    }


    int isbnNumero[10] ;

    int x = 0;
    int z = 0;

    for(x; x<=10; x++){
        if(ISBN[x] != '-'){
        if(ISBN[x] == 'X'){
            isbnNumero[z] = 10;
            z++;
        }else{
            isbnNumero[z] = (int)ISBN[x] - 48;
            z++;
        }
        }
}

    int acumulador[10];
    int j ;
	//acumulador1
    for( j = 0; j<=9; j++){
		if (j>0){
            acumulador[j] = acumulador[j-1] + isbnNumero[j];
        }

	   if(j == 0){
            acumulador[j] = isbnNumero[j];
        }
    }



    int acumulador2[10];
    int k;
	//acumulador2
    for(k=0; k<=9; k++){
        if(k>0){
            acumulador2[k] = acumulador2[k-1] + acumulador[k];
        }

		if(k == 0){
            acumulador2[k] = acumulador[k];
        }
    }


    int resto = acumulador2[9] % 11;
    if(acumulador2[9] % 11 == 0){
        printf("ISBN VALIDO: ");
        printf("%s\n\n", ISBN);


    }else{
        printf("ISBN invalido: resto ");
        printf("%i\n\n", resto );
    }
   }
    return 0;
}
