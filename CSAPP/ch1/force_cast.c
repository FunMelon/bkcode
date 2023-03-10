#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  size_t i;
  for (i = 0; i < len; ++i)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) { show_bytes((byte_pointer)&x, sizeof(int)); }

void show_float(float x) { show_bytes((byte_pointer)&x, sizeof(float)); }

void show_pointer(void *x) { show_bytes((byte_pointer)&x, sizeof(void *)); }

int main(int argc, char *argv[]) {
  show_int(114514);
  show_float(191.19);
  show_pointer(argv);
  printf("\n\n");

  int val = 0x87654321;
  byte_pointer valp = (byte_pointer) &val;
  show_bytes(valp, 1);
  show_bytes(valp, 2);
  show_bytes(valp, 3);
  printf("\n\n");

  const char *s = "abcdef";
  show_bytes((byte_pointer) s, strlen(s));
  printf("\n\n");

  short x = 12345;
  short y = -x;
  show_bytes((byte_pointer) &x, sizeof(short));
  show_bytes((byte_pointer) &y, sizeof(short));

  return 0;
}
