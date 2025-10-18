#include <stdio.h>

int main() {
	int soma = 0, numero;
		printf("Digite numeros inteiros positivos (numero negativo encerra a entrada): ");
		do {
			scanf("%d", &numero);
			if (numero >= 0){
			soma+=numero;
		}
		} while (numero >= 0);
		printf("A soma dos numeros e de: %d", soma);
		return 0;
}
