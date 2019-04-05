#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bruno Henrique Dias Gaya - 0030481823049
//Victor Yuzo Nishiyama Ferreira da Costa - 0030481713010
int main()
{
    char numLetra[21] = "";
	char numLetra2[21]= "" ;
    unsigned long long int numfim;
    int fimProcesso = 0;
    int erro1 = 0;



    while(fimProcesso != 1){

    int erro = 0;
    int tamanhoString = 0;
    printf("Entre seu numero inteiro: ");
    gets(numLetra);
    fflush(stdin);

    if(strcmp(numLetra, "0") == 0){
        fimProcesso =1;
    }

    tamanhoString = strlen(numLetra);


	if(tamanhoString >20){
		printf("error\n\n");
		erro=1;
		continue;
	}

    int i ;
	int j = 0;

    for(i = 0; i < tamanhoString; i++){
        if( numLetra[i] != 'l' && numLetra[i] != 'o' && numLetra[i] != 'O' && numLetra[i] !=',' && numLetra[i] != 32
        && numLetra[i] != '0' && numLetra[i] != '1' && numLetra[i] != '2' && numLetra[i] !='3' && numLetra[i] !='4'
&& numLetra[i] != '5' && numLetra[i] !='6' && numLetra[i] !='7' && numLetra[i] != '8' && numLetra[i] !='9')	{ //se for diferente de td isso erro
			erro = 1;
			printf("error\n\n");
			fimProcesso=0;
			erro1 =1;
			break;
			}else{

            if(numLetra[i] == 'l'){
                numLetra2[j] = '1';
                j++;
            }
            if(numLetra[i] == 'o' || numLetra[i] =='O'){
                numLetra2[j] = '0';
                j++;
            }
            if(numLetra[i] >= 48 && numLetra[i] <= 57 ){
               numLetra2[j] = numLetra[i];
                j++;
            }
			}
   }

   numLetra2[j]='\0';

   	if(numLetra2[0] == '\0' && erro1 ==0){// se for vazio
        erro = 1;
		printf("error\n\n"); 
		fimProcesso=0;

	}

   numfim = atoll(numLetra2);

   if(numfim > 2147483647){
	   printf("error\n\n");
	   erro = 1;
	   fimProcesso=0;
   }else if(erro == 0){
       printf("--->%li\n\n",numfim) ;
   }
    }
        printf("Fim do processo");
    return 0;
}
