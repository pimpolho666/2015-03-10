#include <stdio.h>
#include <stdlib.h>

int main()

{
	float   aa, an, idade;
	
	puts("Digite o ano atual");
	scanf_s("%f", &aa);

	puts("digite ano do nascimento");
	scanf_s("%f", &an);

	idade = aa - an;
	printf("A idade é: %f",idade);
	
	system("pause");


}