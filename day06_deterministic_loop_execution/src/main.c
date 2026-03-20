#include <stdio.h>

int is_multiple_of_3_and_5(int n);

int main(void) {
  int count = 0;

  for (int i = 0; i <= 100; i++) {
    if (is_multiple_of_3_and_5(i)) {
      printf("%d\n", i);
      count++;
    }
  }

  printf("COUNT: %d", count);

  return 0;
}

int is_multiple_of_3_and_5(int n) {
  if ((n % 3 == 0) && (n % 5 == 0)) {
    return 1;
  }
  return 0;
}