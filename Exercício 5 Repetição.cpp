#include <stdio.h>

int main() {
	int i = 0, numero = 1, limite;
	printf("Digite um numero: ");
	scanf("%d", &limite);
		do {
			if (numero % 2 == 0) {
				printf("%d\n", numero);
				i++;
			}
			numero++;

		} while (numero <= limite);
		return 0;
}
