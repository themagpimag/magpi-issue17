/* Needed for malloc */
#include <stdlib.h>

/* Needed for sleep */
#include <unistd.h>

#include <stdio.h>

#define MEGABYTE 1048576

/* A megabyte sized buffer */
typedef unsigned char meg_buffer[MEGABYTE];

void fill_buffer(meg_buffer buffer);

int main() {
  /* Define an array of points of the correct type to keep track of
  ** the memory dynamically allocated. */
  meg_buffer *large_buffer; 

  /* Sleep for 5 second before requesting memory. */
  sleep(5);
    
  /* Request a Megabyte block of memory and store a pointer to it. */
  large_buffer = (meg_buffer*)malloc(sizeof(meg_buffer));
    
  /* Memory is only virtually allocated unless it is filled.
  ** Therefore fill the allocated memory. */
  fill_buffer(*large_buffer);
  
  /* Sleep for 5 seconds before freeing memory */
  sleep(5);

  /* Free the memory */
  free(large_buffer);

  /* Sleep for 5 seconds before the function finished. */
  sleep(5);
  
  return 0;
}

/* Fill a Megabyte buffer with random numbers */
void fill_buffer(meg_buffer buffer) {
  long i;
  for(i=0;i<MEGABYTE;i++) {
    buffer[i] = (unsigned char)rand();
  }
}
