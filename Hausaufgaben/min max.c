# include <stdio.h>

int min(int array[], int size) {
	int min = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

int max(int array[], int size) {
	int max = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i]
		}
	}
	return max;
}

void main() {
	int a[] = { 855677, 43, 54498789, 468,6943,7,34,5 };
	int sz = sizeof(a) / sizeof(int);
	int x = min(a, sz);
	int y = max(a, sz); 
	
	printf("Minimum: %d\nMaximum: %d \n", x, y);
}