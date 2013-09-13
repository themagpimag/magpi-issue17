/* Needed for malloc */
#include <stdlib.h>

/* Needed for sleep */
#include <unistd.h>

/* Needed for time */
#include <time.h>

#include <stdio.h>

#define MEGABYTE 1048576

/* A megabyte sized buffer */
typedef unsigned char meg_buffer[MEGABYTE];


int main() {
}

/* A function to allocate an amount of seconds over the course of a
** number of seconds.  The memory is then freed, with an adjustable
** time delay. */
void memory_hog(int num_megs, unsigned int alloc_delay, 
		unsigned int pause, unsigned int dealloc_delay) {

  /* Define an array of points of the correct type to keep track of
  ** the memory dynamically allocated. */
  meg_buffer *large_buffer;

  

  /* Sleep for some number of seconds */
  sleep(alloc_delay);
    
  /* Request a Megabyte block of memory and store a pointer to it. */
  large_buffer = (meg_buffer*)malloc(sizeof(meg_buffer));
    
  /* Memory is only virtually allocated unless it is filled.
  ** Therefore fill the allocated memory. */
  fill_buffer(*large_buffer[i]);
  
  /* Pause before freeing memory */
  sleep(pause);

  /* Free the memory */
  free(large_buffer[i]);
}

/* Fill a Megabyte buffer with random numbers */
void fill_buffer(meg_buffer buffer) {
  long i;
  for(i=0;i<MEGABYTE;i++) {
    buffer[i] = (unsigned char)rand();
  }
}

/* A function to use up a lot of CPU for a given number of seconds */
void cpu_hog(unsigned int run_time) {
  time_t start_time, current_time;
  time(&start_time);
  current_time = start_time;
  while(current_time-start_time < run_time) {
    time(&current_time);
  }
}
