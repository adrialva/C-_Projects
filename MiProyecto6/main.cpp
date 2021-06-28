#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int contador;
	int filas;
	int posiciones;
	int asteriscos;
	// Solicitud del numero de filas a visualizar
	printf("No. de Filas : ");
	scanf(" %d",&filas);
	// Visualizar primera piramide
	posiciones=filas*2;
	for(contador=1;contador<=posiciones;contador+=2) {
		printf("%*c",posiciones-contador,'*');
		for(asteriscos=1;asteriscos<contador;asteriscos++) {
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}


