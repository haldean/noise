#include <stdio.h>

float b = 0;
int i;
int j;
int add = 3;
long cycles = 0;

void update(float *b, int *i, int *j) {
  (*b) += 0.2;
  (*i) += 2 * add - 1;
  (*j) += add;

  if (!(++cycles % 10000)) {
    ++add;
  }
}

int main(int argc, char *argv[]) {
  for (;; update(&b, &i, &j)) {
    putchar(((int) b) + i + j);
  }
}
