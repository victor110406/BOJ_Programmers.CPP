#include<iostream>
using namespace std;

int main() {

	int r, g, b, sum = 0;
	int i, j, k;
	scanf_s("%d %d %d", &r, &g, &b);

	for (i = 0; i < r; i++) {
		for (j = 0; j < g; j++) {
			for (k = 0; k < b; k++) {
				printf("%d %d %d\n", i, j, k);
				sum++;
			}
		}
	}
	printf("%d", sum);

	return 0;
}