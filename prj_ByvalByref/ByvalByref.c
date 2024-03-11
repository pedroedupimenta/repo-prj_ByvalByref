#include <stdio.h>
#include <stdlib.h>
void incrementarPorValor(int x) {
	x++;
}

void incrementarPorReferência (int *x) {
	(*x)++;
}

int main(void) {
	int numero = 5;
	incrementarPorValor(numero);
	printf("Valor original: %d\n", numero);

	incrementarPorReferência(&numero);
	printf("Valor modificado: %d\n", numero);

	return 0;
}
