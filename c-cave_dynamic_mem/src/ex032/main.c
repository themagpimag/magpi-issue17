#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
  int *buffer = 0;
  unsigned int i, num_elements = 0;

  if(argc != 2) {
    printf("Usage: %s <number of elements>\n",argv[0]);
    return 1;
  }
  sscanf(argv[1],"%u",&num_elements);
  if(num_elements == 0) {
    printf("Error: the size of the array must be greater than 0\n");
    return 2;
  }  

  /* Sleep for 10 seconds. */
  sleep(10);

  /* Request a block of memory long enough for 1000 integers */
  buffer = (int*)malloc(sizeof(int)*num_elements);

  /* Check if the request was successful or not. */
  if(!buffer) {
    printf("Error: malloc failed\n");
    return 3;
  } 

  /* Now use the memory as needed. */
  for(i; i<num_elements; i++) {
    buffer[i] = i;
  }

  /* Print the last element to show that it is used. */
  printf("buffer[%u]=%u\n",num_elements-1,buffer[num_elements-1]);

  /* Sleep for 10 seconds. */
  sleep(10);

  /* Free the memory allocated to buffer. */
  free(buffer);

  /* Sleep for 10 more seconds. */
  sleep(10);

  return 0;
}
