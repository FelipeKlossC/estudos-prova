#include <stdio.h>

int main () {
	float resultado, expoente = 1, divisor = 100, soma = 0;
		do {
			resultado = expoente / divisor;
			printf("%.0f / %.0f = %.2f\n", 
				expoente, divisor, resultado);
			soma+= resultado;
			expoente++; 
			divisor--;
		} while (divisor >= 1 && expoente <=100);
		printf("A soma e: %.2f", soma);
		return 0;
}
