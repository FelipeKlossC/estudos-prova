#include <stdio.h>

int main() {
	int soma = 0, numero;
		printf("Digite numeros inteiros positivos (0 encerra a entrada): ");
		do {
			scanf("%d", &numero);
			soma+=numero;
		} while (numero != 0);
		printf("A soma dos numeros e de: %d", soma);
		return 0;
}
