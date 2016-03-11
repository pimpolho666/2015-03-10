#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main()

{
	int antecessor, numero, sucessor;

	printf("Digite um numero inteiro:\n");
	
	scanf_s("%d", &numero);

	printf("\nAntecessor de %d = %d", numero, (numero - 1));

	printf("\nSucessor de %d = %d\n", numero, (numero + 1));

	system("pause");
}