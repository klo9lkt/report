#include <stdio.h>

int main() {
	
	int n, i, j, k; 

	scanf_s("%d", &n);

	for (i = n; i >= 1; i--) {
		if (i % 2 == 0) continue; 
		for (k = 1; k <= (n - i) / 2; k++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}

	for (i = 2; i <= n; i++) {
		if (i % 2 == 0) continue; 
		for (k = 1; k <= (n - i) / 2; k++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}

	return 0;
}