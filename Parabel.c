#include <stdio.h>
#include "testat-6.h"

int scheitelhoehe(struct parabel * p, double *y) {
  int rc = 0;
  // ...
  return rc;
}

void sort_parabeln(struct parabel * p, int n) {
  // ...
}

int main() {
  struct parabel p[] = {
    {1,2,3},
    {2,5,-19},
    {0,0,0},
    {-1,0,0}
  };
  double y;
  printf("Index 0 ist eine echte Parabel: %d\n", scheitelhoehe(p, &y) == 0);
  sort_parabeln(p, sizeof(p) / sizeof(struct parabel));
  return 0;
}
