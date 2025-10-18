#include <stdio.h>

int main() {
	int numero = 5;
	do {
		if(numero % 5 == 0){
		printf("%d\n", numero);
	}
	numero++;
	} while (numero <= 100);
	return 0;
}
