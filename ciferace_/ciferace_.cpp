#include <stdio.h>

int ciferace(int x) {
	int m, vysledek = 0;
	while (x > 0) {
		m = x % 10;
		vysledek = vysledek + m;
		x = x / 10;
	}
	if (vysledek > 9) vysledek = ciferace(vysledek);
	return vysledek;
}

int main() {
	int hodnota = 0;
	printf("zadej cislo: ");
	scanf_s("%d", &hodnota);
	printf("Vysledek je %d", ciferace(hodnota));
}
