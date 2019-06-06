//ler uma string e quantas letras tem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    printf("Digite uma palavra de até 10 caracters.\n");
    char texto[10];
    int i,c, cont=0;
    
    fgets(texto, 10, stdin);
    c = strlen(texto);

    printf("Numero de letras = %d", c);

    for(i=0; texto[i] != 0; i++){

        if(texto[i]==' ') {
            cont++;
        }
      }printf(" %d",cont+1);
    }