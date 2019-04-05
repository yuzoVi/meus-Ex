#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bruno Henrique Dias Gaya - 0030481823049
//Victor Yuzo Nishiyama Ferreira da Costa - 0030481713010
int main()
{
    //declarção da matriz inicial
    int matrizInicial[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 0, 1, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
    };


    // declarção da matriz final
    char matrizFinal[128] = "";
    //declaração dos contadores preto/branco
    int branco = 0;
    int preto = 0;
    char pretoChar[3] = "";
    char brancoChar[3] = "";

    // declaração dos contadores
    int i, j ;

    for(i = 0  ; i<8; i++ ){
            if(i>=1){ // á partir da segunda linha adicionar os ultimos digitos e zerar.
                if(branco>0){
                  itoa(branco, brancoChar, 10);
                  strcat(brancoChar, "B");
                  strcat(matrizFinal, brancoChar );
                  branco = 0;
                  memset(brancoChar, 0, sizeof(brancoChar));
                }
                if(preto>0){
                  itoa(preto, pretoChar, 10);
                  strcat(pretoChar, "P");
                  strcat(matrizFinal, pretoChar );
                  preto = 0;
                  memset(pretoChar, 0, sizeof(pretoChar));
                }
                strcat(matrizFinal, "0"); //adicionar o zero
            }
        for(j = 0 ; j<8; j++){
            if(matrizInicial[i][j] == 0){ // verificar qual se é branco ou preto
                    branco++;
               }
            if(matrizInicial[i][j] == 1){
                    preto++;
               }

            if(i == 7 && j ==7){ // adicionar os ultimos numeros
                if(preto>0){
                  itoa(preto, pretoChar, 10);
                  strcat(pretoChar, "P");
                  strcat(matrizFinal, pretoChar );
                  preto = 0;
                  memset(pretoChar, 0, sizeof(pretoChar));
                }

                if(branco>0){
                itoa(branco, brancoChar, 10);
                  strcat(brancoChar, "B");
                  strcat(matrizFinal, brancoChar );
                  branco = 0;
                  memset(brancoChar, 0, sizeof(brancoChar));
                }
                strcat(matrizFinal, "00"); // adicionar os dois zeros
            }


            // checa se precisa adicionar na matriz e zerar os indices
            if(j > 0){
                if(matrizInicial[i][j] == matrizInicial[i][j-1]){
                    continue;
                }else{
                    if(matrizInicial[i][j-1] == 0){
                  itoa(branco, brancoChar, 10);
                  strcat(brancoChar, "B");
                  strcat(matrizFinal, brancoChar );
                  branco = 0;
                  memset(brancoChar, 0, sizeof(brancoChar));
                    }
                    if(matrizInicial[i][j-1] == 1){
                  itoa(preto, pretoChar, 10);
                  strcat(pretoChar, "P");
                  strcat(matrizFinal, pretoChar );
                  preto = 0;
                  memset(pretoChar, 0, sizeof(pretoChar));
                       }
                   }
            }
               }
}


    printf("%s", matrizFinal);

    return 0;
}
