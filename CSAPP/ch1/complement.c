#include <stdio.h>

int main(int argc, char *argv[]) {
  short v = -12345;
  unsigned short uv = (unsigned short)v;
  printf("v = %d. uv = %u\n", v, uv);
  printf("\n");

  int x = -1;
  unsigned int u = 2147483648;

  printf("x = %u = %d\n", x, x);
  printf("u = %u = %d\n", u, u);
  return 0;
}
