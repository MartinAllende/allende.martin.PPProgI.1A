#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarCaracteres(char cadena[],char caracter);

int main(void) {

	int retorno;

	retorno = contarCaracteres("martin raul allende", 'a');

	printf("\nSe repite : %d de veces", retorno);

	return EXIT_SUCCESS;
}

int contarCaracteres(char cadena[],char caracter)
{
	int retorno;
	int i;
	int cont=0;

	for(i = 0;i<strlen(cadena);i++)
	{
		if(cadena[i]==caracter)
		{
			cont++;
		}
	}
	retorno = cont;
	return retorno;
}
