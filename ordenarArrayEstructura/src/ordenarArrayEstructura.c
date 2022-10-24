#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int id;
	char procesador[20];
	char marca[20];
	int precio;
}eNotebook;

int ordenarArray(eNotebook estructura[],int tamEstructura);

int main(void) {

	eNotebook notebooks[10]=
			{
				{1000,"intel","dell",5000},
				{1001,"amd","lenovo",6000},
				{1002,"amd","sony",6000},
				{1003,"amd","dell",3000},
				{1004,"intel","dell",8000},
				{1005,"intel","lenovo",5000},
				{1006,"amd","noga",6000},
				{1007,"intel","sony",5000},
				{1008,"amd","samsung",9000},
				{1009,"amd","iphone",7000}
			};

	int i;

	ordenarArray(notebooks,10);

	printf("ID       PROCESADOR          MARCA           PRECIO          ");
	printf("----------------------------------------------------------------");
	for(i=0;i<10;i++)
	{
		printf("%4d      %10s                %10s            $%5d            ",notebooks[i].id,notebooks[i].procesador,notebooks[i].marca,notebooks[i].precio);
	}

	return EXIT_SUCCESS;
}

int ordenarArray(eNotebook estructura[],int tamEstructura)
{
	int retorno = -1;
	int i;
	int j;
	eNotebook aux;
	if(estructura != NULL && tamEstructura > 0)
	{
		for(i=0;i<tamEstructura;i++)
		{
			for(j=0;j<9;j++)
			{
				if(strcmp(estructura[j].marca,estructura[j+1].marca)<0)
				{
					aux = estructura[j];
					estructura[j] = estructura[j+1];
					estructura[j+1] = aux;
				}
				else if(strcmp(estructura[j].marca,estructura[j+1].marca)==0 && estructura[j].precio < estructura[j+1].precio)
				{
					aux = estructura[j];
					estructura[j] = estructura[j+1];
					estructura[j+1] = aux;
				}
			}
		}

		retorno = 0;
	}

	return retorno;
}
