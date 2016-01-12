/*
 * Print the start of the stack and the address of a function in a dynamically
 * loaded library (libc).
 */
#include<stdlib.h>
#include<stdio.h>
#include<dlfcn.h>

#define LIB "libc.so.6"
#define FNC "printf"

int
main(int argc, char **argv) {
    void *h = dlopen(LIB, RTLD_NOW);
    void *ptr = malloc(sizeof(long int));

    printf("stack:\t0x%lx\n"
            FNC":\t0x%lx\n"
            "heap\t0x%lx\n",
            (unsigned long int)&argc,
            (unsigned long int)dlsym(h, FNC),
            (unsigned long int)ptr);

    return 0;
}
