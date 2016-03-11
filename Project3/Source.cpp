#include <stdio.h>
#include <stdlib.h>

int main() 

	{
		float salario;
		int salario_minimo = 700;
		float diferenca;
		printf("Digite salario do funcionario: \n");
		
		scanf_s("%f", &salario);
		diferenca = salario / salario_minimo;
		printf("%.2f\n\n", diferenca);

			system("pause");

}
