#include <stdio.h>
#include <stdlib.h>


float aplicarDescuento(float valorInicial);

int main(void)
{
	float precio = 1000;
	float precioConDescuento;

	precioConDescuento = aplicarDescuento(precio);

	printf("\nEl precio final es: $%.2f", precioConDescuento);
}

float aplicarDescuento(float valorInicial)
{
	float retorno;

	retorno = valorInicial * 0.95;

	return retorno;

}