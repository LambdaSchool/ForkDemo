#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    
    if (argc > 1) {
        printf("Usage: %s\n", argv[0]);
        exit(-1);
    }
    
  printf("Hello Lambda School!\n");
}

