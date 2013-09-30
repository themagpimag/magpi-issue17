#include <stdio.h>

union share {
  int index;
  float value;
  unsigned char bytes[8];
};

int main() {
  union share s;
  printf("Size of s = %lu\n",sizeof(s));
  printf("Size of s.index = %lu, address of s.index = %p\n",sizeof(s.index),&s.index);
  printf("Size of s.value = %lu, address of s.value = %p\n",sizeof(s.value),&s.value);
  printf("Size of s.bytes = %lu, address of s.bytes = %p\n",sizeof(s.bytes),&s.bytes);
  return 0;
}
