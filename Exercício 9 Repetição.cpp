#include <stdio.h>

int main() {
	int numero, iC, iF;
	printf("Digite um numero para gear a tabuada do mesmo: ");
	scanf("%d", &numero);
	printf("Começa em: ");
	scanf("%d", &iC);
	printf("Termina em: ");
	scanf("%d", &iF);
		while (iC <= iF) {
			printf("%d x %d = %d\n", numero, iC, numero * iC);
			iC++;
		}
		return 0;
}
