#include <stdio.h>

int main() {
	int i = 1, soma = 0;
	do {
		soma+=i;
		i++;
	} while (i <= 100);
	printf("%d", soma);
	return 0;
}
