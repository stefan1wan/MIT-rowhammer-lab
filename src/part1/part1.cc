#include "part1.hh"

/*
 *
 * DO NOT MODIFY
 *
 */

#define NUM_ITERATIONS 100

int main(int argc, char** argv) {
  setvbuf(stdout, NULL, _IONBF, 0);

  if (getuid()) {
    printf("ERROR: Root permissions required!\n");
    exit(1);
  }

  // Allocate a large pool of memory (of size BUFFER_SIZE_MB) pointed to by allocated_mem
  allocated_mem = allocate_pages(BUFFER_SIZE_MB * 1024UL * 1024UL);
 
  // Setup, then verify the PPN_VPN_map
  setup_PPN_VPN_map(allocated_mem, PPN_VPN_map);
  verify_PPN_VPN_map(allocated_mem, PPN_VPN_map);

}
