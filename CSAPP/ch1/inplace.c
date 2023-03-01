#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first <= last; ++first, --last)
    inplace_swap(&a[first], &a[last]);
}

int main(int argc, char *argv[]) {
  int x = 9, y = 10;
  inplace_swap(&x, &y);
  printf("After inplace x is %d, y is %d\n", x, y);
  printf("\n\n");

  int a[5] = {1, 2, 3, 4, 5};
  reverse_array(a, sizeof(a) / sizeof(int));
  for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}
