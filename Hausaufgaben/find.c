#include <stdio.h>

int find(int array[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (array[i] == target) {
      return i;
    }
  }
  return printf("Element %d konnte nicht gefunden werden", target);
}

int main(void) {
  int array[] = {4, 7, 8, 9, 4, 2, 56, 8, 6};
  int size = sizeof(array) / sizeof(array[0]);
  int target = 56;

  int index = find(array, size, target);

  if (target > 0) {
    printf("Element %d konnte beim Index %d gefunden werden", target, index);
  }
}