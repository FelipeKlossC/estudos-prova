#include <stdio.h>

int main() {
	int numero, i = 1;
	printf("Digite um numero e gerarei a tabuada do mesmo: ");
	scanf("%d", &numero);
	while (i <= 10) {
		printf("%d x %d = %d\n", numero, i, numero * i);
		i++;
	}
	return 0;
}
