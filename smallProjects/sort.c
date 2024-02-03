#include <stdio.h>

int main() {
  int list[10] = {10, 90, 20, 80, 30, 70, 40, 60, 50, 100};

  for (int i = 0; 10 > i; i++) {
    for (int j = 0; 10 > j; j++) {
      if (list[j] > list[i]) {
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
        printf("\n%d %d", list[i], list[j]);
      }
    }
  }

  printf("\n");

  for (int i = 0; 10 > i; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");

  return 0;
}
