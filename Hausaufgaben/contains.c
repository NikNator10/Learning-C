#include <stdio.h>

int contains(int array[], int size, int target)
{
  for (int i = 0; i < size; i++) {
    if (array[i] == target) {
        return 1;
    }
  }
  return 0;
}


int main(void) {
  int array[] = {2,5,4,3,2,2,45,56,7,7};
  int size = sizeof(array) / sizeof(int);
  int target = 77;

  if (contains(array, size, target)) {
    printf("Element %d ist  im Array", target);
  }
  else {
    printf("Element %d ist nicht im Array", target);
  }
  
  
}