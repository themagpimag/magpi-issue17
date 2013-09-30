#include <stdio.h>
#include <stdlib.h>

int* fun() {
  int *i=0;
  i=(int*)malloc(sizeof(int));
  return i;
}

int main() {
  int *p = 0;
  p = fun();
  printf("%p\n",p);
  free(p);
  return 0;
}
